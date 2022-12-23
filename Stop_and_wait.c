#include <stdio.h>
#include <windows.h>

int main()
{
    int n, i, exit_flag = 1, flag = 2, timeout = 10000;
    char ch[5][100];

    while (exit_flag)
    {
        puts("\n1) Error free channel");
        puts("2) Received frame is error");
        puts("3) Acknowlegement is lost");
        puts("4) Frame is lost");
        puts("5) Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            for (i = 0; i < 4; ++i)
            {
                printf("\nEnter the value of Frame %d: ", i + 1);
                scanf("%s", ch[i]);
                printf("ACK %d: Frame %d is Receive successfully.", i + 1, i + 1);
            }
            puts("\n\nAll 4 frames received successfully.");
            break;

        case 2:
            for (i = 0; i < 3; ++i)
            {
                printf("\nEnter the value of Frame %d: ", i + 1);
                scanf("%s", ch[i]);
                printf("ACK %d: Frame %d is Receive successfully.", i + 1, i + 1);
            }
            printf("\nEnter the value of Frame 4: ");
            scanf("%s", ch[i]);
            while (1)
            {
                for (i = 0; i < 8; ++i)
                {
                    flag = 1;
                    if (ch[3][i] != '0' && ch[3][i] != '1')
                    {
                        flag = 2;
                        break;
                    }
                }
                if (flag == 2)
                {
                    puts("NACK 4: Frame 4 is error.");
                    printf("Renter the value of Frame 4: ");
                    scanf("%s", ch[3]);
                }
                else
                    break;
            }
            puts("ACK 4: Frame 4 is Receive successfully.");
            puts("\nAll 4 frames received successfully.");
            break;

        case 3:
            for (i = 0; i < 3; ++i)
            {
                printf("\nEnter the value of Frame %d: ", i + 1);
                scanf("%s", ch[i]);
                printf("ACK %d: Frame %d is Receive successfully.", i + 1, i + 1);
            }
            printf("\nEnter the value of Frame 4: ");
            scanf("%s", ch[i]);
            Sleep(timeout);
            puts("NACK 4: Acknowledgement is lost.");
            printf("Renter the value of Frame 4: ");
            scanf("%s", ch[i]);
            puts("ACK 4: Frame 4 is Receive successfully.");
            puts("\n\nAll 4 frames received successfully.");
            break;

        case 4:
            for (i = 0; i < 3; ++i)
            {
                printf("\nEnter the value of Frame %d: ", i + 1);
                scanf("%s", ch[i]);
                printf("ACK %d: Frame %d is Receive successfully.", i + 1, i + 1);
            }
            printf("\nEnter the value of Frame 4: ");
            fflush(stdin);
            int is_received = scanf("%[^\n]", ch[i]);
            while (!is_received)
            {
                puts("NACK 4: Frame 4 is lost.");
                printf("Renter the value of Frame 4: ");
                fflush(stdin);
                is_received = scanf("%[^\n]", ch[i]);
            }
            puts("ACK 4: Frame 4 is Receive successfully.");
            puts("\n\nAll 4 frames received successfully.");
            break;

        case 5:
            exit_flag = 0;
            break;

        default:
            puts("\nInvalid choice !!!... Enter a valid choice.");
            getchar();
        }
    }

    return 0;
}

// Input/Output:-
// ------------

// 1) Error free channel
// 2) Received frame is error
// 3) Acknowlegement is lost
// 4) Frame is lost
// 5) Exit

// Enter your choice: 1

// Enter the value of Frame 1: 10101100
// ACK 1: Frame 1 is Receive successfully.
// Enter the value of Frame 2: 10111011
// ACK 2: Frame 2 is Receive successfully.
// Enter the value of Frame 3: 11110000
// ACK 3: Frame 3 is Receive successfully.
// Enter the value of Frame 4: 11001100
// ACK 4: Frame 4 is Receive successfully.

// All 4 frames received successfully.

// 1) Error free channel
// 2) Received frame is error
// 3) Acknowlegement is lost
// 4) Frame is lost
// 5) Exit

// Enter your choice: 2

// Enter the value of Frame 1: 10110111
// ACK 1: Frame 1 is Receive successfully.
// Enter the value of Frame 2: 01101010
// ACK 2: Frame 2 is Receive successfully.
// Enter the value of Frame 3: 11001001
// ACK 3: Frame 3 is Receive successfully.
// Enter the value of Frame 4: 12345678
// NACK 4: Frame 4 is error.
// Renter the value of Frame 4: 87654321
// NACK 4: Frame 4 is error.
// Renter the value of Frame 4: 10110010
// ACK 4: Frame 4 is Receive successfully.

// All 4 frames received successfully.

// 1) Error free channel
// 2) Received frame is error
// 3) Acknowlegement is lost
// 4) Frame is lost
// 5) Exit

// Enter your choice: 3

// Enter the value of Frame 1: 11010010
// ACK 1: Frame 1 is Receive successfully.
// Enter the value of Frame 2: 01101100
// ACK 2: Frame 2 is Receive successfully.
// Enter the value of Frame 3: 10010110
// ACK 3: Frame 3 is Receive successfully.
// Enter the value of Frame 4: 11011010
// NACK 4: Acknowledgement is lost.
// Renter the value of Frame 4: 11011010
// ACK 4: Frame 4 is Receive successfully.

// All 4 frames received successfully.

// 1) Error free channel
// 2) Received frame is error
// 3) Acknowlegement is lost
// 4) Frame is lost
// 5) Exit

// Enter your choice: 4

// Enter the value of Frame 1: 10110101
// ACK 1: Frame 1 is Receive successfully.
// Enter the value of Frame 2: 01011010
// ACK 2: Frame 2 is Receive successfully.
// Enter the value of Frame 3: 00010110
// ACK 3: Frame 3 is Receive successfully.
// Enter the value of Frame 4:
// NACK 4: Frame 4 is lost.
// Renter the value of Frame 4: 10110101
// ACK 4: Frame 4 is Receive successfully.

// All 4 frames received successfully.

// 1) Error free channel
// 2) Received frame is error
// 3) Acknowlegement is lost
// 4) Frame is lost
// 5) Exit

// Enter your choice: 5