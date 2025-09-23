#include<stdio.h>
int main(){ 
    int max=0;
    int arr1[3][3]={{1,2,3},{4,55,6},{7,8,9}}; 
    int arr2[3][3]={{10,11,12},{13,14,15},{16,17,18}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(arr1[i][j]>max){
                max=arr1[i][j];
            }
            if(arr2[i][j]>max){
                max=arr2[i][j];
            }
        }
    }
    printf("%d",max);
}