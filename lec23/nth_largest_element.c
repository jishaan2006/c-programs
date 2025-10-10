#include<stdio.h>
#include<string.h>
int main()
{
    int arr[100],n,a;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of max element you want:\n");
    scanf("%d",&a);
    for (int j = 0; j < n; j++){
        for (int k =0;k < n-j-1 ; k++){
            if(arr[k]>arr[k+1]){
                int temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    printf("Sorted array is:\n");
    for (int l = 0; l < n; l++)     
    {
        printf("%d\n",arr[l]);
    }
    printf("nth max element is :%d",arr[n-a]);
}