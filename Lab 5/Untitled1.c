#include <stdio.h>
main ()
{
    int i, a, b, m = 1;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    for(i = 1; i <= b; i++)
    {
        m = m*a;
    }
    printf("%d", m);
}
