#include <stdio.h>
struct complex
{
    int r;
    int i;
};
void sum(struct complex a, struct complex b)
{
    struct complex c;
    c.r = a.r + b.r;
    c.i = a.i + b.i;
    printf("%d + %di", c.r, c.i);
}
main ()
{
    struct complex x, y;
    printf("Enter 1st number: ");
    scanf("%d", &x.r);
    printf("Enter co efficient of 1st complex number: ");
    scanf("%d", &x.i);
    printf("Enter 2nd number: ");
    scanf("%d", &y.r);
    printf("Enter co efficient of 2nd complex number: ");
    scanf("%d", &y.i);
    sum(x,y);
}
