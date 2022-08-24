#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int i, len, temp = 0;

    printf("Enter the string : ");
    scanf("%s ", str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            temp = 1;
            break;
        }
    }

    if (temp == 0)
    {
        printf("%s = is a palindrome string.\n", str);
    }
    else
    {
        printf("%s = is not a palindrome string.\n", str);
    }

    return 0;
}