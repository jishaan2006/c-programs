#include<stdio.h>
int main()
{
    int n,a[100],even=0,odd=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(a[j]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("There are %d Even numbers and %d Odd numbers",even,odd);
}