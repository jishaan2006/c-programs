#include<stdio.h>
int power(int a,int b){
    if(b==0){
        return 1;
    }
    return a*power(a,b-1);
}
int main(){
    int data=power(2,3);
    printf("%d",data);
    
}