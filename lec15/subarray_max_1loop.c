#include<stdio.h>
int main()
{
    int a[100],n,maxsum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int currsum=0;
     for(int i=0;i<n;i++)
     {
         currsum=currsum+a[i];
     
         if(currsum>maxsum)
         {
             maxsum=currsum;
         }
        if(currsum<0)
        {
            currsum=0;
        }
     }
    
    printf("%d",maxsum);
}