/*
to print pyramid pattern
             * 
          *  *  *
       *  *  *  *  *
    *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *  *
*/ 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       for(int j=n-1;j>i;j--)
       {
        printf("   ");
       }
       for(int k=0;k<=i;k++)
       {
       printf(" * ");
       }
       for(int p=0;p<i;p++)    
       {
          printf(" * ");
       }
       printf("\n");
    }

} 