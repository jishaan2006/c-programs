#include<stdio.h>
int main()
{
    int a[5]={1,2,55,0,7};
    int min=a[0];
    for (int i=0;i<5;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("min num : %d",min);
      
}