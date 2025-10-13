#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter Size Of Array :\n");
    scanf("%d",&n);
    int *arr= (int *)malloc(n * sizeof(int));
    printf("Enter %d Eelements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}