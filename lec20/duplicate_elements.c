#include <string.h>
#include <stdio.h>
int main()
{
    char str[] = "jisihaanj";
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        int count = 0;
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                count = 1;
            }
        }
        if (count == 1)
        {
            printf("%c", str[i]);
        }
    }
}