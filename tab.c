#include <stdio.h>

int main() {
    int tableau[5] = {1, 2, 3, 4, 5};
    int *pointeur = tableau; // pointeur pointe vers le premier élément du tableau

    for (int i = 0; i < 5; i++) {
        printf("Élément %d : %d\n", i, *(pointeur + i));
    }


    int matrice[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Élément [%d][%d] : %d\n", i, j, matrice[i][j]);
        }
    }

    return 0;
}