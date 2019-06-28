#include <stdio.h>
struct complex
{
    int r;
    int i;
};
struct complex sum(struct complex a, struct complex b)
{
    struct complex c;
    c.r = a.r + b.r;
    c.i = a.i + b.i;
    return c;
}
main ()
{
    struct complex x, y, z;
    printf("Enter 1st number: ");
    scanf("%d", &x.r);
    printf("Enter co efficient of 1st complex number: ");
    scanf("%d", &x.i);
    printf("Enter 2nd number: ");
    scanf("%d", &y.r);
    printf("Enter co efficient of 2nd complex number: ");
    scanf("%d", &y.i);
    z = sum(x,y);
    printf("%d + %di", z.r, z.i);
}
