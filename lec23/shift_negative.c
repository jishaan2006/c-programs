#include<stdio.h>
int main(){
    int arr[10]={4,8,7,-9,14,-41,5,11,-47,-12},n=10;
    int neg[4];
    int pos[6];
    int ans[10];
    int j=0;int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            neg[j]=arr[i];
            j++;
        }
        else{
            pos[k]=arr[i];
            k++;
        }
    }
    int c=0;
    for (int i=0;i<j;i++) {
        ans[c]=neg[i];
        c++;
    }
    for(int i=0;i<k;i++){
        ans[c]=pos[i];
        c++;
    }
    for(int i=0;i<10;i++){
        printf("%d\n",ans[i]);
    }
}