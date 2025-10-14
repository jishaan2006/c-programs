#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter Size of Array :\n");
    scanf("%d",&n);
   
    int * arr=(int *)malloc(n * sizeof(int));
    
    printf("Enter %d Elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int maxarea=1;
    int width;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int height;
            if(arr[i]<arr[j]){
            height=arr[i];
            }
            else{
            height=arr[j];
            }
            width=j-i;
            int area=height*width;
            if(maxarea<area){
                maxarea=area;
            }
        }
    }
    printf("Max Water : %d",maxarea);
    return 0;
}