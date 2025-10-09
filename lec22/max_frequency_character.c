#include<stdio.h>
#include<string.h>
int main(){
    int frequency[256]={0};
    char arr[100];
    int max=0;
    char result;
    printf("Enter string :");
    scanf("%s",arr);
    int length=strlen(arr);
    for(int i=0;i<length;i++){
        frequency[arr[i]]++;    
        }
    for(int i=0;i<256;i++){
        if(frequency[i]>max){
        max=frequency[i];
        result=i;
        }
    }
    printf("Character %c occured %d times",result,max);
}
   