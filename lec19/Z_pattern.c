#include<stdio.h>
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==0 || i==2 || j==3-i-1){
                printf("%d ",arr[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
