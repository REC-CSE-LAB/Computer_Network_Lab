#include <stdio.h>

int main()
{
    int i, v, c[4];
    char f[4][8];

    for (i = 0; i < 4; i++)
    {
        printf("Enter the frame %d:\n", i + 1);
        scanf(" %s", f[i]);
    }

    for (i = 0; i < 8; i++)
    {
        if (f[0][i] == '1') c[0]++;
        if (f[1][i] == '1') c[1]++;
        if (f[2][i] == '1') c[2]++;
        if (f[3][i] == '1') c[3]++;
    }

    v = c[0] + c[1] + c[2] + c[3];

    if (v % 2 == 0)
        puts("There is No error in received Data frame at the Destination.");

    else
    {
        for (i = 0; i < 4; i++)
            printf("There is %s error in frame %d.\n", (c[i] % 2) ? "\b" : "no", i + 1);
    }

    return 0;
}

// Input/Output:-
// ------------

//     case 1:
//     -------
//          Enter the frame 1:
//          10101010            /* Input */
//          Enter the frame 2:
//          10000000            /* Input */
//          Enter the frame 3:
//          00000001            /* Input */
//          Enter the frame 4:
//          11111110            /* Input */
//          There is no error in frame 1.
//          There is error in frame 2.
//          There is error in frame 3.
//          There is error in frame 4.

//      case 2:
//      -------
//          Enter the frame 1:
//          00000000            /* Input */
//          Enter the frame 2:
//          10000001            /* Input */
//          Enter the frame 3:
//          11111111            /* Input */
//          Enter the frame 4:
//          11110000            /* Input */
//          There is No error in received Data frame at the Destination.
