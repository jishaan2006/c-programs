// Call by value.
#include<stdio.h>
int sum(int a ,int b){
    a=22;
    b=33;
    return a+b;
}
int main(){
    int a=30;
    int b=20;
    int data = sum(a,b);
    printf("%d\n",data);
    printf("%d\n",a+b);
}
/*
address is memory location
sum (x,y) --> this is called call by value. Value cannnot be changed/modified in the original value. Only the copy of original values will be affected 
sum (&x,&y) --> this is called call by reference. Value is channged in original values when the copy values are changed/modified.
*/
