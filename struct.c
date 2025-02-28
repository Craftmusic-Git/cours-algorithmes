#include <stdio.h>
#include <stdlib.h>

struct Point {
    double x;
    double y;
};

int main() {
    struct Point p;
    p.x = 10;
    p.y = 5;

    printf("Coordonnées du point : (%d, %d)\n", p.x, p.y);


    struct Point *pointeur;
    pointeur = (struct Point*)malloc(sizeof(struct Point));

    pointeur->x = 15;
    pointeur->y = 12;

    printf("Coordonnée pointeur : (%d, %d)\n", pointeur->x, pointeur->y);

    free(pointeur);
    return 0;
}