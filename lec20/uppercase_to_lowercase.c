#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a sring in uppercase case :");
    scanf("%s",str);
    int length=strlen(str);
    for (int i = 0; i < length; i++)
    {
        str[i]=str[i]+32;
    }
    for (int i = 0; i < length; i++){
        printf("%c",str[i]);
    }
}