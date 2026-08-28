#include <stdio.h>
#include <math.h>

int main() {
    struct point {
        float x;
        float y;
    } point1, point2;
    float sum_x = 0;
    float sum_y = 0;
    printf("x1: ");
    scanf("%f", &point1.x);

    printf("y1: ");
    scanf("%f", &point1.y);

    printf("x2: ");
    scanf("%f", &point2.x);

    printf("y2: ");
    scanf("%f", &point2.y);

    sum_x = point1.x + point2.x;
    sum_y = point1.y + point2.y;

    printf("Resultant vector is equvalence to %fi + %fj",sum_x,sum_y);
}