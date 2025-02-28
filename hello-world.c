#include <stdio.h>
#include <stdlib.h>

void echanger(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int *tableau = (int *)malloc(5 * sizeof(int));
    *tableau = 1;
    tableau[1] = 2;
    *(tableau + 2) = 3;

    printf("%i, %i, %i \n", tableau[0], *(tableau + 1), tableau[2]);

    free(tableau);

    printf("%i, %i, %i \n", tableau[0], *(tableau + 1), tableau[2]);
}