#include <stdio.h>
#include <stdlib.h>

int** matrix_sum(int** A, int** B, int M, int N) {
    int** result = (int**)malloc(M * sizeof(int*));
    for (int i = 0; i < M; i++) {
        result[i] = (int*)malloc(N * sizeof(int));
        for (int j = 0; j < N; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    return result;
}

int main() {
    int M, N;
    scanf("%d %d", &M, &N);
    
    // Allocate memory for matrices A and B
    int** A = (int**)malloc(M * sizeof(int*));
    int** B = (int**)malloc(M * sizeof(int*));
    
    for (int i = 0; i < M; i++) {
        A[i] = (int*)malloc(N * sizeof(int));
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < M; i++) {
        B[i] = (int*)malloc(N * sizeof(int));
        for (int j = 0; j < N; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Calculate the sum of matrices
    int** result = matrix_sum(A, B, M, N);

    // Print the resulting matrix
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < M; i++) {
        free(A[i]);
        free(B[i]);
        free(result[i]);
    }
    free(A);
    free(B);
    free(result);

    return 0;
}