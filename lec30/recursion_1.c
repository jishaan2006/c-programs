#include<stdio.h>
int fibonacci(int a){
    if(a==0){
    return 0;
    }
    fibonacci(a-1);
    printf("%d ",a);
}
int main(){
    fibonacci(5);
}