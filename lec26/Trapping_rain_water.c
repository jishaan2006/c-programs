#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=5;
    int height[]={4,3,0,6,2};
    int rightmax[]={6,6,6,6,2};
    int leftmax[]={4,4,4,6,6};
    int small;
    int total=0;
    for(int i = 0; i < n; i++)
    {
        if(leftmax[i]>rightmax[i]){
            small=rightmax[i];
        }
        else{
            small=leftmax[i];
        }
    total=total+(small-height[i]);
    }

    printf("%d ",total);

    
    return 0;
}
