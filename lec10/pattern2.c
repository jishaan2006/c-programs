/*
to print given pattern 
 *  *  *  *  *  *  *  *  *  * 
 *  *  *  *        *  *  *  * 
 *  *  *              *  *  * 
 *  *                    *  *
 *                          * 
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            printf(" * ");
        }
        for(int k=0;k<i;k++)
        {
            printf("   ");
        }
        for(int m=0;m<i;m++)     
        {
            printf("   ");
        }
         for(int o=n;o>i;o--)
        {
            printf(" * ");
        }
        printf("\n");
    }
 }
