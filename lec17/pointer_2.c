//Call by reference.
#include<stdio.h>
int sum(int *a ,int *b){
    *a=22;
    *b=33;
    int c=*a+*b;
    return c;
}
int main(){
    int a=30;
    int b=20;
    int data = sum(&a,&b);
    printf("%d\n",data);
    printf("%d\n",a+b);
}
