#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible. Columns of first matrix must equal rows of second.\n");
        return 1;
    }
    
    int matrix1[rows1][cols1], matrix2[rows2][cols2], product[rows1][cols2];
    
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            product[i][j] = 0;
        }
    }
    
    // Multiply
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    printf("Product of the two matrices:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
