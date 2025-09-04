#include<stdio.h>
int main ()
{
   int t1=0,t2=1,next,num;
   printf("Enter num=");
   scanf("%d",&num);
   for(int i=1;i<=num;i++)
   {
     printf(" %d ",t1);
     next=t1+t2;
     t1=t2;
     t2=next;
   }
   return 0;
}