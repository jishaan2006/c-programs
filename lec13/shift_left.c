#include<stdio.h>
int main()
{
    int a[100],n,first;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    first=a[0];
    for(int i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
     a[n-1]=first;
      printf("shifted array is:\n");
    for(int k=0;k<n;k++)
    {
        printf("%d\n",a[k]);
    }
}    
