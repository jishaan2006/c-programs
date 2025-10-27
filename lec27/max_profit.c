#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter Number Of Elements in Array :\n");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter %d Elements :\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int min_index = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }

    if (min_index == n - 1) {
        printf("No Profit Possible.\n");
        free(arr);
        return 0;
    }

    int max = arr[min_index + 1];
    int max_index = min_index + 1;
    for (int i = min_index + 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
    }

    int profit = max - min;

    printf("BUY ON DAY : %d  AT PRICE : %d\n", min_index + 1, min);
    printf("SELL ON DAY : %d  AT PRICE : %d\n", max_index + 1, max);
    printf("PROFIT : %d\n", profit);

    free(arr);
    return 0;
}

