#include <stdio.h>
struct complex
{
    int x;
    int y;
};
struct complex sum(struct complex a, struct complex b)
{
    struct complex z;
    z.x = a.x + b.x;
    z.y = a.y + b.y;
    return z;
}
main ()
{
    struct complex m, n, p;
    printf("Enter 1st number: ");
    scanf("%d", &m.x);
    printf("Enter co-efficient of first imaginary number: ");
    scanf("%d", &m.y);
    printf("Enter 1st number: ");
    scanf("%d", &n.x);
    printf("Enter co-efficient of first imaginary number: ");
    scanf("%d", &n.y);
    p = sum(m, n);
    printf("%d + %di", p.x, p.y);
}
