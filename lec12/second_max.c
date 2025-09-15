#include<stdio.h>
int main()
{
    int max=-4000;
    int max2=-4000;
    int a[100],n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
for(int i=0;i<n;i++)
{
    if(a[i]>max)
    {
        max2=max;
        max=a[i];

    }
}
printf("First Max is %d and Second max is %d",max,max2);
}