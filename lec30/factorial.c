#include<stdio.h>
int fibonacci(int a){
    if(a==0){
        return 1;
    }
    return a*fibonacci(a-1);
}
int main(){
    int data=fibonacci(4);
    printf("%d",data);
    
}