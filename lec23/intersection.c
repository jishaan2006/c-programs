#include<stdio.h>
int main(){
    int arr1[]={1,4,5,6,3};
    int arr2[]={7,2,6,7,3,8,11,56,4};
    int s1=sizeof(arr1)/sizeof(arr1[0]);
    int s2=sizeof(arr2)/sizeof(arr2[0]);
    for(int i=0;i<s1;i++){
        for(int j=0;j<s2;j++){
            if(arr1[i]==arr2[j]){
                printf("%d ",arr1[i]);
            }
        }
    }
    return 0;
}