#include <stdio.h>
main ()
{
    int i, n, x = 0, y = 1, z;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n == 1) printf("0");
    else if (n == 2) printf("0 1");
    else
    {
        printf("0 1 ");
        for(i = 3; i <= 10; i++)
        {
            z = x+y;
            printf("%d ", z);
            x = y;
            y = z;
        }
    }
}
