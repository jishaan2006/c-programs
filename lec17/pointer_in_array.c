#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int *P=arr;
    for(int i=0;i<5;i++){
        printf("%d\n",*(P+i));
    }
}
