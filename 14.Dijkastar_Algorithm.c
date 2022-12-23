#include <stdio.h>

int main()
{
    int n, b[10], a1, a2;

    printf("\nEnter the number of nodes in the subnet: ");
    scanf("%d", &n);

    puts("\nComputation of shortest path connecting node A and node D is as follows:");

    printf("Enter the distance between A -> B: ");
    scanf("%d", &b[0]);
    printf("Enter the distance between B -> C: ");
    scanf("%d", &b[1]);
    printf("Enter the distance between C -> D: ");
    scanf("%d", &b[2]);
    printf("Enter the distance between B -> E: ");
    scanf("%d", &b[3]);
    printf("Enter the distance between E -> F: ");
    scanf("%d", &b[4]);
    printf("Enter the distance between F -> H: ");
    scanf("%d", &b[5]);
    printf("Enter the distance between E -> G: ");
    scanf("%d", &b[6]);
    printf("Enter the distance between G -> H: ");
    scanf("%d", &b[7]);
    printf("Enter the distance between H -> D: ");
    scanf("%d", &b[8]);

    puts("\nComputation of path from Node A - Node D are Path P1, P2");

    puts("\nPath P1: A->B + B->E + E->G + G->H + H->D");
    a1 = b[0] + b[3] + b[6] + b[7] + b[8];
    printf("Value of path P1 is %d\n", a1);

    puts("\nPath P1: A->B + B->E + E->F + F->H + H->D");
    a2 = b[0] + b[3] + b[6] + b[5] + b[8];
    printf("Value of path P2 is %d\n", a2);

    printf("\nPath connecting Node A to Node D is path %s", (a1 < a2) ? "P1" : "P2");

    return 0;
}

// Input/Output:

// Enter the number of nodes in the subnet : 8

// Computation of shortest path connecting node A and node D is as follows :
// Enter the distance between A->B : 2
// Enter the distance between B->C : 7
// Enter the distance between C->D : 3
// Enter the distance between B->E : 2
// Enter the distance between E->F : 2
// Enter the distance between F->H : 2
// Enter the distance between E->G : 1
// Enter the distance between G->H : 4
// Enter the distance between H->D : 2

// Computation of path from Node A - Node D are Path P1,P2

// Path P1 : A->B + B->E + E->G + G->H + H->D
// Value of path P1 is 11

// Path P1 : A->B + B->E + E->F + F->H + H->D
// Value of path P2 is 9

// Path connecting Node A to Node D is path P2