#include<stdio.h>
#include<string.h>
int main(){
    char str[100],newstr[100],target;
    printf("Enter String :\n");
    scanf(" %s",str);
    int ln=strlen(str);
    printf("Enter target character to delete form the string :\n");
    scanf(" %c",&target);
    int j=0;
    for(int i=0;i<ln;i++){
        if(str[i]!=target){
            newstr[j]=str[i];
            j++;
        }
    }
    newstr[j]='\0';
    printf("%s",newstr);
}