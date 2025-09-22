#include<stdio.h>
int swap(int *b,int *a){
        int temp=*a;
        *a=*b;
        *b=temp;
        
}
int main(){
    int a=10;
    int b=5;
    swap(&a,&b);
    printf("a=%d b=%d", a , b );
}