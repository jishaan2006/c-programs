//calculator if else
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter First num:");
    scanf("%d",&a);
    printf("Enter Second num:");
    scanf("%d",&b);
    printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");   
    printf("Enter your choice:");
    scanf("%d",&c);
    if (c==1)
    {
        printf("Sum=%d",a+b);
    }
    else if(c==2)
    {
        printf("Difference=%d",a-b);
    }
    else if(c==3)
    {
        printf("Multiplication=%d",a*b);
    }
    else if(c==4)
    {
        if(b==0)
        {
            printf("Cannot divide a number by Zero.");   //for good measure.
        }
        else
        {
            printf("Division=%d",a/b);
        }
    }
    return 0;
}