#include<stdio.h>
int check(int num)
{   
  
    int ld,sum=0;
    while (num>0)
    {
    ld=num%10;
    sum=sum+ld;
    num=num/10;
    }
    return sum;
}
int main()
{
    int n,res;
    printf("Enter number:");
    scanf("%d",&n);
    res=n;
    while(res>9)
    {
        res=check(res);
    }
    if(res==1)
    {
        printf("magic number");
    }
    else 
    {
        printf("not magic number");
    }
}