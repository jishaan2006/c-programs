#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    char str3[100];
    printf("Enter First string :\n");
    scanf("%s",str1);
    int length1=strlen(str1);
    printf("Enter Second string :\n");
    scanf("%s",str2);
    int length2=strlen(str2);
    for(int i=0;i<length1;i++){
        str3[i]=str1[i];
    }
    for(int j=0;j<length2;j++){
        str3[j+length1]=str2[j];
    }
    for(int i=0;str3[i]!='\0';i++){
        printf("%c",str3[i]);
    }
}