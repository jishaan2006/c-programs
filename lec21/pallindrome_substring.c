#include<stdio.h>
#include<string.h>
int pallindrome(char s1[],int s,int e){
    while (s<e)
    {
        if(s1[s]!=s1[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
int main(){
    char s1[100];
    printf("Enter first string :");
    scanf("%s",s1);
    int l1=strlen(s1);
    for(int i = 0; i < l1; i++) {
        for(int j = i; j < l1; j++){
           if(i!=j && pallindrome(s1,i,j)==1){
            for(int k=i;k<=j;k++){
                printf("%c",s1[k]);
            }
            printf("\n");
           }
        }
    }
}