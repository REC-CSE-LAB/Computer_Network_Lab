#include <stdio.h>

int min(int p[], int size)
{
    int result = 0;
    for (int i = 1; i < size; ++i)
    {
        if (p[i] < p[result])
            result = i;
    }
    return result + 1;
}

int main()
{
    int n, p[5];

    int AB, AE;
    int BA, BC, BF;
    int CB, CE, CD;
    int DC, DF;
    int EA, EC, EF;
    int FE, FB, FD;

    printf("\nEnter the number of node in the subnet: ");
    scanf("%d", &n);

    puts("\nApplying the Link State Routing Algorithm");
    puts("The possible paths connecting the nodes A and D are: P1/P2/P3/P4.\n");

    puts("The link state packects existing at Node A are: AB and AE");
    printf("Enter the value of AB and AE: ");
    scanf("%d %d", &AB, &AE);

    puts("The link state packects existing at Node B are: BA, BC and BF");
    printf("Enter the value of BA, BC and BF: ");
    scanf("%d %d %d", &BA, &BC, &BF);

    puts("The link state packects existing at Node C are: CB, CE and CD");
    printf("Enter the value of CB, CE and CD: ");
    scanf("%d %d %d", &CB, &CE, &CD);

    puts("The link state packects existing at Node D are: DC and DF");
    printf("Enter the value of DC and DF: ");
    scanf("%d %d", &DC, &DF);

    puts("The link state packects existing at Node E are: EA, EC and EF");
    printf("Enter the value of EA, EC and EF: ");
    scanf("%d %d %d", &EA, &EC, &EF);

    puts("The link state packects existing at Node F are: FE, FB and FD");
    printf("Enter the value of FE, FB and FD: ");
    scanf("%d %d %d", &FE, &FB, &FD);

    puts("\nPath-1: A->B + B->C + C->D ");
    p[0] = AB + BC + CD;
    printf("P1: %d\n", p[0]);

    puts("Path-2: A->E + E->F + F->D ");
    p[1] = AE + EF + FD;
    printf("P2: %d\n", p[1]);

    puts("Path-3: A->B + B->F + F->D ");
    p[2] = AB + BF + FD;
    printf("P3: %d\n", p[2]);

    puts("Path-4: A->E + E->C + C->D ");
    p[3] = AE + EC + CD;
    printf("P4: %d\n", p[3]);

    printf("\nThe shortest path is connecting Node A to Node D applying link state routing algorithm: P%d", min(p, 4));

    return 0;
}

// Input/Output:-
// ------------

// Enter the number of node in the subnet: 6
//
// Applying the Link State Routing Algorithm
// The possible paths connecting the nodes A and D are: P1/P2/P3/P4.
//
// The link state packects existing at Node A are: AB and AE
// Enter the value of AB and AE: 4 5
// The link state packects existing at Node B are: BA, BC and BF
// Enter the value of BA, BC and BF: 4 2 6
// The link state packects existing at Node C are: CB, CE and CD
// Enter the value of CB, CE and CD: 2 1 3
// The link state packects existing at Node D are: DC and DF
// Enter the value of DC and DF: 3 7
// The link state packects existing at Node E are: EA, EC and EF
// Enter the value of EA, EC and EF: 5 1 8
// The link state packects existing at Node F are: FE, FB and FD
// Enter the value of FE, FB and FD: 8 6 7
//
// Path-1: A->B + B->C + C->D
// P1: 9
// Path-2: A->E + E->F + F->D
// P2: 20
// Path-3: A->B + B->F + F->D
// P3: 17
// Path-4: A->E + E->C + C->D
// P4: 9
//
// The shortest path is connecting Node A to Node D applying link state routing algorithm: P1