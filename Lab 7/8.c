#include <stdio.h>
int factorial(int n)
{
    int i, m = 1;
    for(i = 1; i <= n; i++)
    {
        m = m*i;
    }
    return m;
}
main ()
{
    int x, r;
    printf("Enter an integer: ");
    scanf("%d", &x);
    r = factorial(x);
    printf("%d", r);
}
