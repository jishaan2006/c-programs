#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int b[5]={60,70,80,90,100};
    int c[10];
    for(int i=0;i<5;i++)
    {
       c[i]=a[i];
    }
    for(int j=0;j<5;j++)
    {
        c[j+5]=b[j];
    }
    for(int d=0;d<10;d++)
    {
        printf("%d\n",c[d]);
    }
}