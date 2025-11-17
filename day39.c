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
    
    int diag[n];
    for (int i = 0; i < n; i++) {
        diag[i] = matrix[i][i];
    }
    
    int isDistinct = 1; 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) break;
    }
    
    if (isDistinct) {
        printf("The elements on the diagonal are distinct.\n");
    } else {
        printf("The elements on the diagonal are not distinct.\n");
    }
    
    return 0;
}
