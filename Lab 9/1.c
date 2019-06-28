#include <stdio.h>
struct point
{
    float x;
    float y;
};
main ()
{
    struct point p1, p2;
    float d, dx, dy;
    printf("Enter point 1\nx: ");
    scanf("%f", &p1.x);
    printf("y: ");
    scanf("%f", &p1.y);
    printf("Enter point 2\nx: ");
    scanf("%f", &p2.x);
    printf("y: ");
    scanf("%f", &p2.y);
    if(p1.x > p2.x) dx = p1.x - p2.x;
    else dx = p2.x - p1.x;
    if(p1.y > p2.y) dy = p1.y - p2.y;
    else dy = p2.y - p1.y;
    d = dx + dy;
    printf("Manhattan distance: %f", d);
}
