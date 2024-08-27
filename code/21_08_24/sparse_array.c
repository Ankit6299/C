#include <stdio.h>

int main() {
    int a[5][6] = {
        {0, 0, 7, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 5, 9, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 2, 0, 0, 0, 0}
    };
    
    // Count non-zero elements [value]
    int count = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if (a[i][j] != 0) {
                count++;
            }
        }
    }

    // Create a sparse matrix representation (row, column, value)
    int sparse[count][3];
    int k = 0;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if (a[i][j] != 0) {
                sparse[k][0] = i;      // Row index
                sparse[k][1] = j;      // Column index
                sparse[k][2] = a[i][j]; // Value
                k++;
            }
        }
    }

    // Print sparse matrix representation
    printf("Sparse matrix representation (row, column, value):\n");
    printf("R C V\n");
    printf("5 6 %d\n",count);
    for (int i = 0; i < count; i++) {
        printf("%d %d %d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    }

    return 0;
}