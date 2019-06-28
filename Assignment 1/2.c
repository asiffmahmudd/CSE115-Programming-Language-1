#include <Stdio.h>
main ()
{
    float e = 2.71, m = 1;
    int i, x;
    printf("Enter x: ");
    scanf("%d", &x);
    for(i = 1; i <= x; i++)
    {
        m = e*m;
    }
    printf("%f\n", m);
}
