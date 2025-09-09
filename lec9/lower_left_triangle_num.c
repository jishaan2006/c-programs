/*
to print lower left triangle pattern using numbers
 0 
 0  1
 0  1  2
 0  1  2  3
 0  1  2  3  4
 0  1  2  3  4  5
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
            printf(" %d ",j);
        }
        printf("\n");
    }
}