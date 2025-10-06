#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    int length=strlen(str1);
    int flag=1;
    printf("Enter First string :\n");
    scanf("%s",&str1);
    printf("Enter Second string :\n");
    scanf("%s",&str2);
    for(int i=0;i<length;i++){
        if(str1[i]!=str2[i]){
            flag=0;
        }
    }
    if(flag==1){
        printf("Strings are same");
    }
    else{
         printf("Strings are not same");
    }
}
   
    