#include <stdio.h>
struct complex
{
    int x;
    int y;
};
void sum(struct complex a, struct complex b)
{
    struct complex z;
    z.x = a.x + b.x;
    z.y = a.y + b.y;
    printf("%d + %di\n", z.x, z.y);
}
main ()
{
    struct complex m, n;
    printf("Enter 1st number: ");
    scanf("%d", &m.x);
    printf("Enter co-efficient of first imaginary number: ");
    scanf("%d", &m.y);
    printf("Enter 1st number: ");
    scanf("%d", &n.x);
    printf("Enter co-efficient of first imaginary number: ");
    scanf("%d", &n.y);
    sum(m, n);
}
