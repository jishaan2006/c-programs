// 4. Shift 0 to end
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter Number Of Elements in Array :\n");
    scanf("%d", &n);
    int *arr=(int *)malloc(n * sizeof(int));
    printf("Enter %d Elements :\n", n);

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int start = 0;
    int end = n - 1;
    while (start <= end){
        if (arr[start] == 0){
            int temp = arr[end];
            arr[end] = arr[start];
            arr[start] = temp;
            end--;
        }
        else{
            start++;
        }
    }

    printf("Sorted Elements :\n");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}