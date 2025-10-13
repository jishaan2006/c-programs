#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,newsize;
    printf("Enter Size Of Array :\n");
    scanf("%d",&n);
    int *arr= (int *)calloc(n, sizeof(int));
    printf("Enter %d Eelements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter New Size Of Array :\n");
    scanf("%d",&newsize);
    arr= (int *)realloc(arr, newsize * sizeof(int));
    printf("Enter %d Eelements :\n",newsize);
    for(int i=0;i<newsize;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<newsize;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}