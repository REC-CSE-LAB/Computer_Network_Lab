#include <stdio.h>
#include <windows.h>

int main()
{
    int n, exit_flag = 1, timeout = 10000;
    char data[5][10];

    while (exit_flag)
    {
        puts("\n1) Damaged Frame");
        puts("2) Lost Frame");
        puts("3) Lost Acknowledgement");
        puts("4) Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            puts("\nDamaged Frame:");
            printf("\nEnter the value of Frame-0: ");
            scanf("%s", &data[0]);
            printf("Enter the value of Frame-1: ");
            scanf("%s", &data[1]);
            printf("Enter the value of Frame-2: ");
            scanf("%s", &data[2]);
            puts("ACK-3: Frame-0, Frame-1, Frame-2 received successfully");
            printf("Enter the value of Frame-3: ");
            scanf("%s", &data[3]);
            puts("NAK-4: Error in Frame-3");
            printf("Enter the value of Frame-4: ");
            scanf("%s", &data[4]);
            puts("Frame-4 discarded by the receiver.");
            printf("Enter the value of Frame-5: ");
            scanf("%s", &data[5]);
            puts("Frame-5 discarded by the receiver.");
            printf("Re-enter the value of Frame-3: ");
            scanf("%s", &data[3]);
            printf("Re-enter the value of Frame-4: ");
            scanf("%s", &data[4]);
            printf("Re-enter the value of Frame-5: ");
            scanf("%s", &data[5]);
            puts("Frame-0, Frame-1, Frame-2, Frame-3, Frame-4, Frame-5 received successfully");
            break;

        case 2:
            puts("\nLost Frame:");
            printf("\nEnter the value of Frame-0: ");
            scanf("%s", &data[0]);
            printf("Enter the value of Frame-1: ");
            scanf("%s", &data[1]);
            printf("Enter the value of Frame-2: ");
            scanf("%[^\n]", &data[2]);
            printf("\nEnter the value of Frame-3: ");
            scanf("%s", &data[3]);
            puts("Frame-3 discarded at the receiver");
            puts("NAK-2: Frame-2 didn't received properly");
            printf("Enter the value of Frame-4: ");
            scanf("%s", &data[4]);
            puts("Frame-4 discarded by the receiver.");
            printf("Re-enter the value of Frame-2: ");
            scanf("%s", &data[2]);
            printf("Re-enter the value of Frame-3: ");
            scanf("%s", &data[3]);
            printf("Re-enter the value of Frame-4: ");
            scanf("%s", &data[4]);
            puts("Frame-0, Frame-1, Frame-2, Frame-3, Frame-4 received successfully");
            break;

        case 3:
            puts("\nLost Acknowledgement:");
            printf("\nEnter the value of Frame-0: ");
            scanf("%s", &data[0]);
            printf("Enter the value of Frame-1: ");
            scanf("%s", &data[1]);
            printf("Enter the value of Frame-2: ");
            scanf("%s", &data[2]);
            puts("ACK-3: generated after receiving 3 frames got lost.");
            Sleep(timeout);
            puts("Sender node Waiting Time has expired: Time-Out !!!...");
            printf("Re-enter the value of Frame-0: ");
            scanf("%s", &data[0]);
            printf("Re-enter the value of Frame-1: ");
            scanf("%s", &data[1]);
            printf("Re-enter the value of Frame-2: ");
            scanf("%s", &data[2]);
            puts("Frame-0, Frame-1, Frame-2 received successfully");
            break;

        case 4:
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

// 1) Damaged Frame
// 2) Lost Frame
// 3) Lost Acknowledgement
// 4) Exit
//
// Enter your choice: 1
//
// Damaged Frame:
//
// Enter the value of Frame-0: 10101010
// Enter the value of Frame-1: 10101011
// Enter the value of Frame-2: 11101101
// ACK-3: Frame-0, Frame-1, Frame-2 received successfully
// Enter the value of Frame-3: 123458sc
// NAK-4: Error in Frame-3
// Enter the value of Frame-4: 10110010
// Frame-4 discarded by the receiver.
// Enter the value of Frame-5: 10110100
// Frame-5 discarded by the receiver.
// Re-enter the value of Frame-3: 10111101
// Re-enter the value of Frame-4: 10110010
// Re-enter the value of Frame-5: 10110100
// Frame-0, Frame-1, Frame-2, Frame-3, Frame-4, Frame-5 received successfully
//
// 1) Damaged Frame
// 2) Lost Frame
// 3) Lost Acknowledgement
// 4) Exit
//
// Enter your choice: 2
//
// Lost Frame:
//
// Enter the value of Frame-0: 10110010
// Enter the value of Frame-1: 01001101
// Enter the value of Frame-2: Enter the value of Frame-3: 11010110
// Frame-3 discarded at the receiver
// NAK-2: Frame-2 didn't received properly
// Enter the value of Frame-4: 10010101
// Frame-4 discarded by the receiver.
// Re-enter the value of Frame-2: 11001010
// Re-enter the value of Frame-3: 11010110
// Re-enter the value of Frame-4: 10010101
// Frame-0, Frame-1, Frame-2, Frame-3, Frame-4 received successfully
//
// 1) Damaged Frame
// 2) Lost Frame
// 3) Lost Acknowledgement
// 4) Exit
//
// Enter your choice: 3
//
// Lost Acknowledgement
//
// Enter the value of Frame-0: 11011011
// Enter the value of Frame-1: 01101001
// Enter the value of Frame-2: 10110101
// ACK-3: generated after receiving 3 frames got lost.
// Sender node Waiting Time has expired: Time-Out !!!...
// Re-enter the value of Frame-0: 11011011
// Re-enter the value of Frame-1: 01101001
// Re-enter the value of Frame-2: 10110101
// Frame-0, Frame-1, Frame-2 received successfully
//
// 1) Damaged Frame
// 2) Lost Frame
// 3) Lost Acknowledgement
// 4) Exit
//
// Enter your choice: 4