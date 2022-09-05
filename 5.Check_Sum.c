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
            printf("")
        }
    }
    return 0;
}
