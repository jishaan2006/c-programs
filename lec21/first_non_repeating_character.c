#include <stdio.h>
#include <string.h>
int main()
{
    char frequency[256] = {0};
    char arr[100];
    printf("Enter string :");
    scanf("%s", arr);
    int length = strlen(arr);
    for (int i = 0; i < length; i++)
    {
        frequency[arr[i]]++;
    }
    for (int i = 0; i < length; i++)
    {
        if (frequency[arr[i]] == 1)
        {
            printf("%c", arr[i]);
            break;
        }
    }
}
