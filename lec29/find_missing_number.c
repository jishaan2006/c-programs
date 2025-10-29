#include<stdio.h>
int main(){
    int arr[4]={1,2,3,5};
    int xor_array=0;
    int xor_original=0;
    int result=0;
    for(int i=0;i<4;i++){
        xor_array=xor_array^arr[i];
    }
    for(int i=1;i<=5;i++){
        xor_original=xor_original^i;
    }
    result=xor_array^xor_original;
    
    printf("%d",result);
}