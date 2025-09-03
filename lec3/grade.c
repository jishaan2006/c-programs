//grade checker if else
#include<stdio.h>
int main()
{
    int m,a;
    printf("Enter Marks :");
    scanf("%d",&m);
    if(m>75)
    {
        printf("Grade A");
    }
    else if(m<75 && m>65)
    {
        printf("Grade B"); 
    }
    else if(m<65 && m>55)
    {
        printf("Grade C");
    }
    else 
   { 
        printf("Grade F");
   }
    return 0;
}