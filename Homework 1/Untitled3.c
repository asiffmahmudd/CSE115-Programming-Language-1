#include <stdio.h>
int main ()
{
    int s;
    double a, r, g;
    printf("Enter basic salary:");
    scanf("%d", &s);
    a = s * 0.4;
    r = s * 0.2;
    g = s + a + r;
    printf("Gross salary = %0.2lf", g);

    return 0;
}
