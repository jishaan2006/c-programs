#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a sring :");
    scanf("%s", str);
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (str[i] < 95)
        {
            str[i] = str[i] + 32;
        }
        else
        {
            str[i] = str[i] - 32;
        }
        
    }
    for (int i = 0; i < length; i++)
    {
        printf("%c", str[i]);
    }
}