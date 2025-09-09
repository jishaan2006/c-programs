/*
to print lower left triangle pattern using lower case alphabets
 a 
 b  c
 d  e  f
 g  h  i  j
 k  l  m  n  o
 */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    int k=97;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" %c ",k);
            k++;
        }
        printf("\n");
    }
}