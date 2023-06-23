#include <stdio.h>
#include <stdlib.h>
#include "lab3.h"

int main(){
    int statusRow, statusColumn, statusElements;
    int rowLength, columnLength;
    int i, j;
    int userOption;
    int shouldContinue = 1;

    printf("Enter the row size of the 2D array: ");
    statusRow = scanf("%d", &rowLength);

    if (statusRow == 0 || rowLength <= 0) {
        printf("ERROR: Invalid input. Positive integers only.\n");
        return 0;
    }

    printf("Enter the column size of the 2D array: ");
    statusColumn = scanf("%d", &columnLength);

    if (statusColumn == 0 || columnLength <= 0) {
        printf("ERROR: Invalid input. Positive integers only.\n");
        return 0;
    }

    if (rowLength != columnLength) {
        printf("ERROR: Array must be a square matrix. Row length and column length must be equal.\n");
        return 0;
    }

    int elements[rowLength][columnLength];
    printf("Enter %d numbers (space separated): ", rowLength * columnLength);
    for (i = 0; i < rowLength; i++) {
        for (j = 0; j < columnLength; j++) {
            statusElements = scanf("%d", &elements[i][j]);
            if (statusElements == 0) {
                printf("ERROR: Invalid input. Numbers only.\n");
                return 0;
            }
        }
    }

    do {
        printf("Choose an operation:\n");
        printf("(0) : exit\n");
        printf("(1) : reverse array\n");
        printf("(2) : randomize array\n");
        printf("(3) : sort array\n");
        printf("(4) : print array\n");
        scanf("%d", &userOption);

        switch (userOption) {
            case 0:
                shouldContinue = 0;
                break;
            case 1:     
                reverse_array(rowLength, columnLength, elements);
                break;
            case 2:
                randomize_array(rowLength, columnLength, elements);
                break;
            case 3:
                sort_array(rowLength, columnLength, elements);
                break;
            case 4:
                print_array(rowLength, columnLength, elements);
                break;
            default:
                printf("ERROR: Invalid menu option. Please try again.\n");
                break;
        }
    } while (shouldContinue == 1);

    return 0;
}
