#include<stdio.h>
int prime(int a)
{
    for( int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int q;
    printf("Enter number:");
    scanf("%d",&q);
    if(prime(q)==1)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
}