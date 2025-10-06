#include<stdio.h>
int main(){
    char str[]="Jishaan";
    printf("%s\n",str);
    for(int i=0;str[i]!='\0';i++){
        printf("%c\n",str[i]);
    }
}