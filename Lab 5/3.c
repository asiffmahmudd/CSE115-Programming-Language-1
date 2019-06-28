#include <stdio.h>
main ()
{
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    float s;
    for(i = 1; i <= n; i++)
    {
        s = sqrt(i);
        printf("%d\t%0.2f\n", i, s);
    }
}
