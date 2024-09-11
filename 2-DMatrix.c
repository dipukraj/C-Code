#include <stdio.h>

int main() {
    // Define dimensions of the 2-D array
    int rows = 3, cols = 4;

    // Declare and initialize a 2-D array
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Print the elements of the 2-D array
    printf("Elements of the 2-D matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}