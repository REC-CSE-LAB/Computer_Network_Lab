#include <stdio.h>
#include <string.h>

int main()
{
    char s[9], ch;
    int count = 0, i;

    printf("Enter the 8 bit string: ");
    scanf("%s", s);

    printf("Enter x for even parity and y for odd parity: ");
    scanf(" %c", &ch);

    for (i = 0; i < 8; ++i)
        if (s[i] == '1')
            ++count;

    if (ch == 'x')
    {
        if (count % 2 == 0)
            puts("Entered string is even parity");
        else
        {
            puts("append 1 to string");
            s[8] = '1';
            printf("String: %s", s);
        }
    }

    else if (ch == 'y')
    {
        if (count % 2 != 0)
            puts("Entered string is odd parity");
        else
        {
            printf("append 1 to string\n");
            s[8] = '1';
            printf("String: %s", s);
        }
    }

    return 0;
}