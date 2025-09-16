#include<stdio.h>
int main()
{
    int a[10]={3,2,7,8,11,5,4,12,9,1};
    int b=10;
    for(int i=0;i<10;i++)
    {
        for (int j=0;j<i;j++)
        {
            if(a[i]+a[j]==b)
            {
               printf("%d at a[%d] and %d at a[%d]\n",a[i],i,a[j],j); 
               //to print one pair use break
            }
        }

    }
}