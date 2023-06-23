
#include <stdio.h>
#include "lab3.h"

void sort_array(int rowLength, int columnLength, int (*arr)[columnLength]) {
    int i, j, k;
    for (i = 0; i < rowLength; i++) {
        for (j = 0; j < columnLength - 1; j++) {
            int minIndex = j;
            for ( k = j + 1; k < columnLength; k++) {
                if (arr[i][k] < arr[i][minIndex]) {
                    minIndex = k;
                }
            }
            if (minIndex != j) {
                int temp = arr[i][j];
                arr[i][j] = arr[i][minIndex];
                arr[i][minIndex] = temp;
            }
        }
    }
    print_array(rowLength, columnLength, arr);
}
