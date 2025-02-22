#include <stdio.h>
#include <stdlib.h>

struct Point {
    float x;
    float y;
};

typedef struct Point Point;

int main(int argc, char*argv[]) {
    int var = 10;
    int *p = &var;
    
    printf("var: %i, p: %i, *p: %i \n", var, (int)p, *p);

    Point myPoint = { 1.0f, 2.0f };
    printf("point x: %f, y: %f \n", myPoint.x, myPoint.y);
    
    return 0;
}