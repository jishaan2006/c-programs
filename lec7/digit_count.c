#include<stdio.h>
int main()
{
    int num,p=0;
    printf("Enter number =");
    scanf("%d",&num);
    if (num==0)
    {
        printf("invalid num.");
    } 
    else{
    for(int i=1;num>0;i++)
    {
      num=num/10;
     p++;
    }
    printf("%d",p);
}
}