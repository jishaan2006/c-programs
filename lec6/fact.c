// to find fatorial
#include<stdio.h>
int main()
{
    int a,fact=1;
    printf("enter number:");
    scanf("%d",&a);
    for (int i = 1; i<=a; i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d = %d",a,fact);
}
