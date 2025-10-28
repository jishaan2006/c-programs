#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    printf("Enter String :");
    scanf("%s",arr);
    int len=strlen(arr);
    int left=0;
    int right=len-1;
    int check=1;
    while(left<right){
        if (arr[right]==arr[left])
        {
            left++;
            right--;
        }
        else{
            int flag_left=1,flag_right=1;

            for(int i=left+1,j=right;i<j;i++,j--){
                if(arr[i]!=arr[j]){
                    flag_left=0;
                    break;
                }
            }
            for(int i=left,j=right-1;i<j;i++,j--){
                if(arr[i]!=arr[j]){
                    flag_right=0;
                    break;
                }
            }
            if(flag_left ==0 && flag_right==0){
                check=0;
            }
            break;
        }
    } 
    if(check){
        printf("String can be pallindrome after removing a character");
    }
    else{
        printf("String cannot be pallindrome even after removing a character");
    }
}