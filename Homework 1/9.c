#include <stdio.h>
int main ()
{
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    y = 2*x*x*x + x*x - 7;
    printf("%d", y);
    return 0;
}
