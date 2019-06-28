#include <stdio.h>
int main ()
{
    int w, x, y, z;
    printf("Enter w: ");
    scanf("%d", &w);
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    z = (3*x + 4*y)/w;
    printf("z = %d", z);
    return 0;
}
