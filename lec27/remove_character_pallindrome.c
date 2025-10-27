#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    printf("Enter String :");
    scanf("%s",arr);
    int len=strlen(arr);
    int flag=1;
    for(int i=0;i<len/2;i++){
        if (arr[i]!=arr[len-1-i])
        {
            flag=0;
            break;
        }
    } 
    if(flag==1){
    printf("String is pallindrome without removing last character\n");
    }
    else{
        arr[len-1]='\0';
        len--;
        flag=1;
        for(int i=0;i<len/2;i++){
            if(arr[i]!=arr[len-1-i]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("String is pallindrome after removing last Character\n");
        }
        else{
            printf("String is not pallindrome");
        }
    }
    return 0;
}