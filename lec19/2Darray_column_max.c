#include<stdio.h>
int main()
{
    int arr[3][3]={{1,99,14},{4,5,56},{7,69,9}};
    int max=0;
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[j][i]>max){
                max=arr[j][i];
            }
        }
        printf("%d\n",max);
        max=0;
    }
}