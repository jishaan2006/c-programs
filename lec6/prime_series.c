#include<stdio.h>
int prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
      return 1;
}
int main()
{
    int num;
    printf("enter num:");
    scanf("%d",&num);
    for(int i=2;i<=num;i++)
    {
        if(prime(i))
        {
            printf("%d\n",i);
        }
    }
    return 0;
}