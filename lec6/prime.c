#include<stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    if (num <= 1) 
    {
        printf("Not prime\n");
        return 0;
    }

    for (int i = 2; i < num; i++) 
    {
        if (num % i == 0) 
        {
            count = 1; 
            break;     
        }
    }

    if (count == 0)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}
