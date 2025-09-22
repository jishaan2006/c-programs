#include<stdio.h>
int main(){
    int a=10;
    int b=5;
    printf("Numbers before swapping are \na = %d b = %d\n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("Numbers after swapping are \na = %d b = %d\n",a ,b);
}