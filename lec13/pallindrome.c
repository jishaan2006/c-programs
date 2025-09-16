#include<stdio.h>
int main()
{
    int n;
    int a[100];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    int check=1;
    for(int i;i<n/2;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            check=0;
            break;
        }
    }
    if(check==1)
    {
        printf("pallindrome");
    }
    else
    {
        printf("not pallindrome");
    }
}