#include<stdio.h>
int main()
{
    int a[5];
    for(int j=0;j<5;j++)
    {
        scanf("%d",a[j]);
    }
    int max=a[0];
    for (int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("max num : %d",max);
    return 0;
}