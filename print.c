#include "lab3.h"
#include <stdio.h>

void print_array(int rows, int cols, int (*arr)[cols]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}