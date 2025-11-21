#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);
    
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Diagonal traversal of the matrix:\n");
    for (int k = 0; k < 2 * n - 1; k++) {
        printf("Diagonal %d: ", k + 1);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i + j == k) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}
