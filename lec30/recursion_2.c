#include<stdio.h>
int fibonacci(int a){
    if(a==0){
    return 0;
    }
    printf("%d ",a);
    fibonacci(a-1);
}
int main(){
    fibonacci(5);
}