#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    int printed[256] = {0};
    printf("Enter First string :\n");
    scanf("%s", &str1);
    int length1 = strlen(str1);
    printf("Enter Second string :\n");
    scanf("%s", &str2);
    int length2 = strlen(str2);
    for (int i = 0; i < length1; i++)
    {
        for (int j = 0; j < length2; j++)
        {
            if (str1[i] == str2[j])
            {
                printed[str1[i]]++;
            }
        }
    }
    for (int i = 0; i < 256; i++)
    {
        if (printed[i] > 0)
        {
            printf("%c", i);
        }
    }
}
