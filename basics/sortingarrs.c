#include <stdio.h>

void bubblesort(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int rows, cols, element;

    printf("How many cols: ");
    scanf("%d", &cols);
    printf("How many rows: ");
    scanf("%d", &rows);

    int numbers[rows][cols];

    // Input loop
    for (int k = 0; k < cols; k++) {
        for (int l = 0; l < rows; l++) {
            printf("What number should be on row %d and column %d: ", l + 1, k + 1);
            scanf("%d", &numbers[l][k]);
        }
    }

    // Flatten 2D array into 1D array
    int size = rows * cols;
    int flat[size];
    int index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            flat[index++] = numbers[i][j];
        }
    }

    // Sort the 1D array
    bubblesort(flat, size);

    // Reshape 1D array back to 2D array
    index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            numbers[i][j] = flat[index++];
        }
    }

    // Output loop
    printf("The sorted 2D array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}

