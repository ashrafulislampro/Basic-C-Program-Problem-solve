// first function
#include <stdio.h>

int main()
{
    char ch = 'w';

    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is lower case.\n", ch);
    }
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is upper case.\n", ch);
    }
    return 0;
}
// second function
#include <stdio.h>

int main()
{
    char ch = 'K';

    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is lowercase.\n", ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is uppercase. \n", ch);
    }
    return 0;
}