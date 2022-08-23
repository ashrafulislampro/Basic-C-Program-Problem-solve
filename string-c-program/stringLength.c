#include <stdio.h>

int string(char str[])
{
    int i;
    int length = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    };

    return length;
}
// int string_length(char str[])
// {
//     int i = 0;
//     int length = 0;
//     while (str[i] != '\0')
//     {
//         i++;
//         length++;
//     }
//     return length;
// }

int main()
{

    char str;
    printf("Enter string : ");
    gets(str);

    int length = string(str);

    printf("The string length is : %d ", length);
    return 0;
}
