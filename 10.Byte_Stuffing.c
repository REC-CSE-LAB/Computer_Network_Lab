#include <stdio.h>
#include <string.h>

int data_to_binary(int n)
{
    int output = 0, place = 1, rem;
    while (n > 0)
    {
        rem = n % 2;
        output = output + (place * rem);
        n = n / 2;
        place = place * 10;
    }
    return output;
}

int main()
{
    int i;
    char data[10], Flag[9] = "00011011", ESC[9] = "11111110";

    printf("Enter the original data: ");
    scanf("%s", data);

    puts("\nData Existing at Network Layer of the source node is:");
    for (i = 0; i < strlen(data); ++i)
    {
        printf("%08d ", data_to_binary(data[i]));
    }

    puts("\n\nData Existing at Data Link Layer of the source node is:");
    printf("%s ", ESC);
    for (i = 0; i < strlen(data); ++i)
    {
        if ((i + 1) % 2 == 0)
        {
            printf("%s ", Flag);
        }
        printf("%08d ", data_to_binary(data[i]));
    }
    printf("%s\n", ESC);

    puts("\nData Received at Data Link Layer of the source node is:");
    printf("%s ", ESC);
    for (i = 0; i < strlen(data); ++i)
    {
        if ((i + 1) % 2 == 0)
        {
            printf("%s ", Flag);
        }
        printf("%08d ", data_to_binary(data[i]));
    }
    printf("%s\n", ESC);

    puts("\nData Received at Network Layer of the destination node is:");
    for (i = 0; i < strlen(data); ++i)
    {
        printf("%08d ", data_to_binary(data[i]));
    }

    return 0;
}

// Input/Output:

// Enter the original data: apple
//
// Data Existing at Network Layer of the source node is:
// 01100001 01110000 01110000 01101100 01100101
//
// Data Existing at Data Link Layer of the source node is:
// 11111110 01100001 00011011 01110000 01110000 00011011 01101100 01100101 11111110
//
// Data Received at Data Link Layer of the source node is:
// 11111110 01100001 00011011 01110000 01110000 00011011 01101100 01100101 11111110
//
// Data Received at Network Layer of the destination node is:
// 01100001 01110000 01110000 01101100 01100101