#include <stdlib.h>
#include <stdio.h>
#include "lab3.h"

void randomize_array(int rowLength, int columnLength, int (*arr)[columnLength]) {
    int i,j, temp;
    srandom(1964);
    for (i = 0; i < rowLength; i++) {
        for (j = 0; j < columnLength; j++) {
            rowLength = random() % (rowLength-1);
            columnLength = random() % (columnLength-1);
            temp = arr[i][j];
            arr[i][j] = arr[rowLength][columnLength];
            arr[rowLength][columnLength] = temp;
        }
    }
    print_array(rowLength, columnLength, arr);
}