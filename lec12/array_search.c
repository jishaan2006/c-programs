#include<stdio.h>
int main()
{
    int n;
    int a[10]={1,55,12,17,69,45,33,62,85,99};
    printf("Enter element to search for:");
    scanf("%d",&n);
    for (int i=0;i<5;i++)
    {
        if(a[i]==n)
        {
            printf("Found at a[%d]\n",i);
            return 0;
        } 
    }
    printf("Not Found\n");
}