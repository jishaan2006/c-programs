//to print sum of digits of a number 
#include<stdio.h>
int main()
{
    int lastdigit,num=946,sum=0;
    while (num>0)
    {
    lastdigit=num%10;
    sum=sum+lastdigit;
    num=num/10;
    }
    printf("%d",sum);
}