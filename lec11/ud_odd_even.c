#include<stdio.h>
void check(int a)
{
    
    if(a%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

}
int main()
{
    int b;
    scanf("%d",&b);
    check(b);
}