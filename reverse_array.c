
#include <stdio.h>
#include "lab3.h"

void reverse_array(int rowLength, int columnLength, int (*arr)[columnLength]) {
    int i,j;
    for (i = 0; i  < rowLength; i++) {
        int start = 0;
        int end = columnLength -1;
        while(start  < end){
        //for (j = 0; j < columnLength; j++) {//
            int temp = arr[i][start];
            arr[i][start] = arr[i][end];
            arr[i][end] = temp;

            start++;
            end--;
        }
    }     

    for (i = rowLength - 1; i >= rowLength / 2; i--) {
        for (j = 0; j < columnLength; j++) {
        int temp = arr[i][j];
        arr[i][j] = arr[rowLength - i - 1][j];
        arr[rowLength - i - 1][j] = temp;
        }
    }
    print_array(rowLength, columnLength, arr);

}