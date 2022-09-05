#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, f[5][8], p;
    char c[8];
    for( i = 0; i < 5; ++i )
    {
        printf("Enter Data Frame %d:\n", i+1);
        scanf(" %s",c);
        for( j = 0; j < 8; ++j )
            f[i][j] = c[j]-48;
    }
    for( i = 0; i < 8; ++i )
    {
        p = f[0][i] ^ f[1][i] ^ f[2][i] ^ f[3][i] ^ f[4][i];
        if( p )
        {
            printf("There is an Error in Received Data Frame.");
            exit(1);
        }
    }
    printf("There is NO Error in Received Data Frame.");
    return 0;
}


// Input/Output:-
// -----------

//     Case 1:
//     ------
//         Enter Data Frame 1:
//         11001010
//         Enter Data Frame 2:
//         10101010
//         Enter Data Frame 3:
//         11001100
//         Enter Data Frame 4:
//         11100011
//         Enter Data Frame 5:
//         01001111
//         There is NO Error in Received Data Frame.

//     Case 2:
//     ------
//         Enter Data Frame 1:
//         11001010
//         Enter Data Frame 2:
//         10101010
//         Enter Data Frame 3:
//         11001100
//         Enter Data Frame 4:
//         11100010
//         Enter Data Frame 5:
//         01001111
