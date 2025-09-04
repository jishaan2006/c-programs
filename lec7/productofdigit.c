#include<stdio.h>
int main()
{
    int num,lastdigi,res=1;
    printf("Enter number:");
    scanf("%d",&num);
    for(int i=1;num>0;i++)
    {
        int lastdigit=num%10;
        res=res*lastdigit;
        num=num/10;
    }
    printf("%d",res);
}