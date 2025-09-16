#include<stdio.h>
int main()
{
    int a[100],n,max=0 ;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<i;j++)
        {
            if(a[i]+a[j]>max)
            {
                max=a[i]+a[j];
            }
        }
    }
    printf("max sum is %d",max);
}