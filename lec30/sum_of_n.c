#include<stdio.h>
int fibonacci(int a){
    if(a==0){
        return 0;
    }
    return a+fibonacci(a-1);
}
int main(){
    int data=fibonacci(3);
    printf("%d",data);
    
}