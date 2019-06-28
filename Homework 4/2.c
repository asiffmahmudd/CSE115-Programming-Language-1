#include <stdio.h>
main ()
{
    int i, n, m = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for(i = 0; n != 0; i++)
    {
        m = m + n%10;
        n = n/10;
    }
    printf("%d", m);
}
