#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter Size of Array :\n");
    scanf("%d",&n);
   
    int * height=(int *)malloc(n * sizeof(int));
    
    printf("Enter %d Elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&height[i]);
    }
    
    int maxarea=0;
    int i=0;
    int j=n-1;
    while(i<j){
        int h;
        if(height[i]<height[j]){
            h=height[i];
        }
        else{
            h=height[j];
        }
        int w=j-i;
        int area=h*w;
        if(area>maxarea){
            maxarea=area;
        }
        if(height[i]<height[j]){
            i++;
        }
        else{
            j--;
        }
        
    }
    
    printf("Max Water : %d",maxarea);
    return 0;
    }
