#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
      for (int i = 2; i >= 0; i--)
        {
            for (int j = 0; j <3 ; j++){
                printf("%d ",arr[i][j]);
             }  
        printf("\n");
        }
    return 0;
}