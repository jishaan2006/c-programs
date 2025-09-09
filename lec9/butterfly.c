#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows (even num):");
    scanf("%d",&n);
 if(n%2==0)
 {
    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" * ");
        }
        for(int k=n/2-1;k>i;k--)
        {
            printf("   ");
        }
        for(int m=n/2-1;m>i;m--)
        {
            printf("   ");
        }
         for(int o=0;o<=i;o++)
        {
            printf(" * ");
        }
        printf("\n");
    }
   for (int q=0;q<n/2;q++)
   {
     for(int r=n/2;r>q;r--)
     { 
        printf(" * ");
     }
     for(int s=0;s<q;s++)
     {
        printf("   ");
     }
          for(int t=0;t<q;t++)
     {
        printf("   ");
     }
          for(int t=n/2;t>q;t--)
     { 
        printf(" * ");
     }

    printf("\n");
   }

 }
 else
 printf("Invalid number of rows.\n(enter even number of rows)");
}
