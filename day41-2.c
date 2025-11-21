#include <stdio.h>

#define MAX_SIZE 100  


void multiplyMatrices(int A[][MAX_SIZE], int B[][MAX_SIZE], int C[][MAX_SIZE], int m, int n, int p) {
    // Initialize C to 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }
    
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}


void printMatrix(int mat[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
  
    int A[MAX_SIZE][MAX_SIZE] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int B[MAX_SIZE][MAX_SIZE] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };
    int C[MAX_SIZE][MAX_SIZE]; 
    
    int m = 2, n = 3, p = 2;  
    
    multiplyMatrices(A, B, C, m, n, p);
    
    printf("Matrix A:\n");
    printMatrix(A, m, n);
    
    printf("\nMatrix B:\n");
    printMatrix(B, n, p);
    
    printf("\nResult Matrix C (A * B):\n");
    printMatrix(C, m, p);
    
    return 0;
}
