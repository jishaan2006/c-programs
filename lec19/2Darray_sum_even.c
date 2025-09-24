#include<stdio.h>
int main()
{
    int arr[3][3]={{1,2,14},{44,5,6},{7,18,9}};
    int sum=0;
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]%2==0){
                sum+=arr[i][j];
            }
        }
    }
    printf("Sum of even numbers is %d ",sum);
}
