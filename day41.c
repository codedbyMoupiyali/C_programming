#include <stdio.h>

#define MAX_COL 100 

void diagonalTraversal(int mat[][MAX_COL], int row, int col) {
   
    for (int k = 0; k < row + col - 1; k++) {
        int i, j;
        
        if (k < row) {
            i = k;
            j = 0;
        } else {
            i = row - 1;
            j = k - row + 1;
        }
       
        while (i >= 0 && j < col) {
            printf("%d ", mat[i][j]);
            i--;
            j++;
        }
    }
    printf("\n");
}

int main() {
   
    int mat[3][MAX_COL] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int row = 3;
    int col = 3;

    printf("Diagonal traversal of the matrix:\n");
    diagonalTraversal(mat, row, col);

    return 0;
}
