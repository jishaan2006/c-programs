/*
to print lower left triangle pattern using capital alphabets
 A 
 B  C
 D  E  F
 G  H  I  J
 K  L  M  N  O
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    int k=65;
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