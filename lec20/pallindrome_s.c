#include<string.h>
#include<stdio.h>
int main(){
    char str[]="madam";
    int len=strlen(str);
    int flag=1;
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i]){
            flag=0;
        }
    }
    if(flag==1){
        printf("pallindrome");
    }
    else{
        printf("not pallindrome");
    }
}