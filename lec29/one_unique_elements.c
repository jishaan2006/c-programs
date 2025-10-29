#include<stdio.h>
int main(){
    int arr[7]={2,3,4,5,4,3,2};
    int result=0;
    for(int i=0;i<7;i++){
        result=result^arr[i]; //^ means XOR
    }
    printf("%d",result);
}