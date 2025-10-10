#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isPalindrome(char *s, int left, int right){
    while (left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left++; right--;
    }
    return true;
}

bool ValidPal(char *s){
    int left = 0 , right = strlen(s)-1;
    while (left<right)
    {
         if(s[left]!=s[right]){
            return isPalindrome(s,left+1,right) || isPalindrome(s,left,right-1) ;
        }
        left++;
        right--;
    }
    return true;
}
int main(){
    char s[100];
    printf("Enter a string: ");
    scanf("%s",s);
    if(ValidPal(s)){
        printf("Yes it can be valid palindrom on ond character removal");
    }
    else{
        printf("aint valid palidrome even after removing one");
    }
}