#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],t[100];
    int flag;
    printf("Enter first string :");
    scanf("%s",s1);
    printf("Target String :");
    scanf("%s",t);
    int l1=strlen(s1);
    int t1=strlen(t);
    for(int i = 0; i <=l1-t1; i++) {
        flag=1;
        for(int j = 0; j <t1; j++){
           if(s1[i+j]!=t[j]){
            flag=0;
            break;
           }
        }
        if(flag==1){
            printf("Found");
            return 0;
        }
    }
        printf("not found");
        return 0;
}
