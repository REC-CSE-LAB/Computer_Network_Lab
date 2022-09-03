#include <stdio.h>

int main()
{
    char message[12];
    int input[12], output[12], trailer[4], index;

    printf("Enter the 7-bit message: ");
    scanf("%s", message);

    for (int i = 0, j = 0; i < 11; ++i)
    {
        if (i == 0 || i == 1 || i == 3 || i == 7)
            continue;
        input[i] = message[j++] - 48;
    }

    input[0] = input[2] ^ input[4] ^ input[6] ^ input[8] ^ input[10];
    input[1] = input[2] ^ input[5] ^ input[6] ^ input[9] ^ input[10];
    input[3] = input[4] ^ input[5] ^ input[6];
    input[7] = input[8] ^ input[9] ^ input[10];

    printf("The 11-bit data sequence at the sender: ");
    for (int i = 0; i < 11; ++i)
        printf("%d ", input[i]);

    printf("\nEnter the 11-bit data sequence at receiver: ");
    scanf("%s", message);

    for (int i = 0, j = 0; i < 11; ++i)
        output[i] = message[j++] - 48;

    trailer[0] = output[0] ^ output[2] ^ output[4] ^ output[6] ^ output[8] ^ output[10];
    trailer[1] = output[1] ^ output[2] ^ output[5] ^ output[6] ^ output[9] ^ output[10];
    trailer[2] = output[3] ^ output[4] ^ output[5] ^ output[6];
    trailer[3] = output[7] ^ output[8] ^ output[9] ^ output[10];

    index = trailer[0] + trailer[1] * 2 + trailer[2] * 4 + trailer[3] * 8;

    if (index - 1 > 0 && index - 1 < 11)
    {
        printf("There is an error in %d bit position in the data sequence.", index);

        output[index - 1] ^= output[index - 1];

        printf("\nAfter correction of the error, ");
    }
    else
        printf("There is no error in the data sequence, ");

    printf("The data sequence is : ");

    for (int i = 0; i < 11; i++)
        printf("%d ", output[i]);

    return 0;
}

// Input/Output:-
// ------------

//     case 1:
//     -------
//          Enter the 7-bit message: 1011001
//          The 11-bit data sequence at the sender: 1 0 1 0 0 1 1 1 0 0 1
//          Enter the 11-bit data sequence at receiver: 10100101001
//          There is an error in 7 bit position in the data sequence.
//          After correction of the error, The data sequence is : 1 0 1 0 0 1 0 1 0 0 1

//      case 2:
//      -------
//          Enter the 7-bit message: 1011001
//          The 11-bit data sequence at the sender: 1 0 1 0 0 1 1 1 0 0 1
//          Enter the 11-bit data sequence at receiver: 10100111001
//          There is no error in the data sequence, The data sequence is : 1 0 1 0 0 1 1 1 0 0 1