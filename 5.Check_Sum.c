#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[8];
    int i, j, f[4][8], sum[8], carry = 0, temp;
    for( i = 0; i < 4; ++i )
    {
        printf("Enter the Data Frame %d:\n", i+1);
        scanf("%s",c);
        for( j = 0; j < 8; ++j )
            f[i][j] = c[j]-48;
    }
    for( i = 7; i >= 0; --i )
    {
        temp = f[0][i] + f[1][i] + f[2][i] + carry;
        sum[i] = temp%2;
        if( carry ) carry = 0;
        carry = temp/2;
    }
    for( i = 0; i < 8; ++i )
    {
        
        temp = sum[i]^f[3][i];
        if( temp == 0 )
        {
            printf("There is an Error in Received Data Frames.");
            exit(1);
        }
    }
    printf("There is NO Error in Received Data Frames.");
    return 0;
}

// Input/Output:-
// ------------
    
//     Case 1:
//     -------
//         Enter the Data Frame 1:
//         10101001                 /* Input */
//         Enter the Data Frame 2:
//         00111001                 /* Input */
//         Enter the Data Frame 3:
//         00011101                 /* Input */
//         Enter the Data Frame 4:
//         00000000                 /* Input */
//         There is NO Error in Received Data Frames.
        
//     Case 2:
//     -------
//         Enter the Data Frame 1:
//         10101001                 /* Input */
//         Enter the Data Frame 2:
//         00111001                 /* Input */
//         Enter the Data Frame 3:
//         00011100                 /* Input */
//         Enter the Data Frame 4:
//         00000000                 /* Input */
//         There is an Error in Received Data Frames.
