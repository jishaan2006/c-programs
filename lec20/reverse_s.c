#include<string.h>
#include<stdio.h>
int main(){
    char str[]="Jishaan";
    int len=strlen(str);
    for(int i=len;i>=0;i--){
        printf("%c\n",str[i]);
    }
}