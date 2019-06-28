#include <stdio.h>
struct distance
{
    double x;
    double y;
};
main ()
{
    struct distance a, b;
    double d, dx, dy;
    printf("Enter x1: ");
    scanf("%lf", &a.x);
    printf("Enter y1: ");
    scanf("%lf", &a.y);
    printf("Enter x2: ");
    scanf("%lf", &b.x);
    printf("Enter y2: ");
    scanf("%lf", &b.y);
    dx = a.x - b.x;
    dy = a.y - b.y;
    d = sqrt(dx*dx + dy*dy);
    printf("%lf", d);
}
