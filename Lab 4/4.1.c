#include <stdio.h>
int main ()
{
    int x, y, i, s = 1;
    float m;
    printf("Enter x & y: ");
    scanf("%d %d", &x, &y);

    for(i = 1; i <= y; i++)
    {
        s = s*x;
    }
    m = 1.00/s;
    printf("%f", m);
    return 0;
}
