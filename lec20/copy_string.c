#include<stdio.h>
int main(){
    char str1[]="Jishaan";
    char str2[10];
    for(int i=0;str1[i]!='\0';i++){
        str2[i]=str1[i];
    }
     for(int i=0;str1[i]!='\0';i++){
        printf("%c\n",str2[i]);
    }
}