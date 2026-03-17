#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int *A[r], *B[r], *C[r];

    for(int i=0; i<r; i++) {
        A[i] = (int*)malloc(c * sizeof(int));
        B[i] = (int*)malloc(c * sizeof(int));
        C[i] = (int*)malloc(c * sizeof(int));
    }

    printf("Enter Matrix A:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            scanf("%d", &A[i][j]);

    printf("Enter Matrix B:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            scanf("%d", &B[i][j]);

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            C[i][j] = A[i][j] + B[i][j];

    printf("Result Matrix:\n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
