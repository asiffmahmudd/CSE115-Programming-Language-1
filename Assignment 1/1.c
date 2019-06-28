#include <stdio.h>
main ()
{
    int a, n, i, m = 1, sum = 0;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        m = m*a;
        sum = sum + m;
    }
    sum = 1 + sum;
    printf("%d\n", sum);
}
