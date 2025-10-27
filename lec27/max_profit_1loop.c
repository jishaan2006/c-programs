#include<stdio.h>
#include<stdlib.h>
int main(){
    
    int n;
    printf("Enter number of elements :");
    scanf("%d",&n);
    int *arr=(int *)malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int min_price=arr[0];
    int max_profit=0;
    for(int i=1;i<n;i++){
        if(arr[i]<min_price){
            min_price=arr[i];
        }
        else{
            int profit =arr[i]-min_price;
            if(profit>max_profit){
                max_profit=profit;
            }
        }
    }

    printf("Max profit is : %d\n",max_profit);

    free(arr);
    return 0;
}