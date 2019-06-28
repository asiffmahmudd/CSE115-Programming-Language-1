#include <stdio.h>
main ()
{
    int i, n, f = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for(i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            f = 1;
            break;
        }
    }
    if(f == 0) printf("Prime");
    else printf("Not prime");
}
