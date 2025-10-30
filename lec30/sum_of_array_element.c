#include<stdio.h>
int sum(int arr[],int i){
    
    if(i==0){
        return 0;
    }
    return arr[i-1]+sum(arr,i-1);
}
int main(){
    int arr[3]={1,2,7};
    int data =sum(arr,3);
    printf("%d",data);
}