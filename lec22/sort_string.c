#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter String :");
    fgets(str,100,stdin);
    for(int i=0;str[i]!='\0';i++){
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]>str[j]){
                int temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("%s",str);
}