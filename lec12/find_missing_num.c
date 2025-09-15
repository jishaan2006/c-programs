#include<stdio.h>
int main()
{   
     int n;
     int a[100];
     int sum=0;
     int originalsum=1;
     int missingnum=0;
     printf("Enter number of elements:");
     scanf("%d",&n);
     for(int j=0;j<n;j++)
     {
          scanf("%d",&a[j]);
     }
     for(int i=0;i<n;i++)    
     {
      sum=sum+a[i]; 
     }
     printf("Sum = %d\n",sum);
     originalsum=((n+1)*(n+2))/2;              // formula for sum of n terms is (n(n+1))/2.
     printf("Sum Should be: %d\n",originalsum);// Value of n is n+1 in formula for missing term.
     missingnum=originalsum-sum;
     printf("Missing Number is : %d",missingnum);
}