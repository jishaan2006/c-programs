/* 
to print given pattern 
 *                          * 
 *  *                    *  * 
 *  *  *              *  *  *
 *  *  *  *        *  *  *  *
 *  *  *  *  *  *  *  *  *  *
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" * ");
        }
        for(int k=n-1;k>i;k--)
        {
            printf("   ");
        }
        for(int m=n-1;m>i;m--)
        {
            printf("   ");
        }
         for(int o=0;o<=i;o++)
        {
            printf(" * ");
        }
        printf("\n");
    }
 }
