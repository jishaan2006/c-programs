#include <stdio.h>
int main(){
    int leftmax[6];
    int height[6]={4,2,0,3,2,5};
    int rightMax[6];
    int water=0;

    leftmax[0]=height[0];
    
    for(int i =1;i<6;i++){
        if(height[i]>leftmax[i-1]){
            leftmax[i]=height[i];
        }else{
            leftmax[i]=leftmax[i-1];
        }
    }
        rightMax[5]=height[5];
     for(int i =4;i>=0;i--){
        if(height[i]>rightMax[i+1]){
            rightMax[i]=height[i];
        }else{
            rightMax[i]=rightMax[i+1];
        }
    }


    for(int i=0;i<6;i++){
    int minHieght;
        if(leftmax[i]<rightMax[i]){
            minHieght=leftmax[i];
        }else 
        {
            minHieght=rightMax[i];
        }
        water=water+(minHieght-height[i]);
        
    }
    printf("%d",water);
    
}