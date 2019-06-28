#include <stdio.h>
int main ()
{
    int x, y;
    float r;
    printf("Enter x & y: ");
    scanf("%d %d", &x, &y);

    r = 1.00/pow(x, y);
    printf("%f", r);
    return 0;
}
