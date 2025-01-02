#include <stdio.h>

int main() {
    int rows;
    int cols;
    int element;

    printf("How many cols: ");
    scanf("%d", &cols);
    printf("How many rows: ");
    scanf("%d", &rows);

    int numbers[rows][cols];

    // Input loop
    for (int k = 0; k < cols; k++) {
        for (int l = 0; l < rows; l++) {
            printf("What number should be on row %d and column %d: ", l + 1, k + 1);
            scanf("%d", &element);
            numbers[l][k] = element; // Added semicolon
        }
    }

    // Output loop
    printf("The 2D array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}

