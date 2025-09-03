//to check number is pallindrome
#include<stdio.h>
int main()
{
    int a,res=0,b;
    printf("Enter number");
    scanf("%d",&a);
    b=a;
    while(a!=0)
    {
        int lastdigit=a%10;
        res=res*10+lastdigit;
        a=a/10;
    }
   if (res==b)
    {
        printf("Number is pallindrome.");
    }
    else 
   { 
     printf("Number is not pallindrome");
   }
}