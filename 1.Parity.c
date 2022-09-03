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

//  Input/Output:-
//  ------------

//     case 1:
//     ------
//         Enter the 8 bit string: 01100110     /* Input */
//         Enter x for even parity and y for odd parity: x     /* Input */
//         Entered string is even parity

//     case 2:
//     ------
//         Enter the 8 bit string: 00101010     /* Input */
//         Enter x for even parity and y for odd parity: x     /* Input */
//         append 1 to string
//         String: 001010101

//     case 3:
//     ------
//         Enter the 8 bit string: 00101100     /* Input */
//         Enter x for even parity and y for odd parity: y     /* Input */
//         Entered string is odd parity

//     case 4:
//     ------
//         Enter the 8 bit string: 01110100     /* Input */
//         Enter x for even parity and y for odd parity: y     /* Input */
//         append 1 to string
//         String: 011101001