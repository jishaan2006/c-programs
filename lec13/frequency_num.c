#include<stdio.h>
int main()
{
    int a[100],key,count=0,n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    printf("Enter element to find: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            count ++;
        }
    } 
    printf(" % d Occured in array %d times",key,count);
}