#include<stdio.h>
#include<string.h>
int main(){
    char arr[100],key;
    printf("Enter string :");
    scanf("%s",arr);
    int length=strlen(arr);
    printf("Enter character to find frequency :");
    scanf(" %c",&key); // space before %c to tell scanf to ignore whitespace characters like \n,\t
    int count=0;
    for(int i=0;i<length;i++){
        if(arr[i]==key){
            count++;
        }
    }
    printf("Number occured %d times.",count);

}