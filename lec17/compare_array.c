#include <stdio.h>
int compare(int *p1, int *p2) {
    for (int i = 0; i<5; i++) {
        if (*(p1 + i) != *(p2 + i)) {
            return 0; 
        }
    }
    return 1; 
}
int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2, 3, 4, 5};
    int data = compare(arr1, arr2);
    if(data == 1){
        printf("same\n");
    }
    else{
        printf("different\n");
    }
    return 0;
}
