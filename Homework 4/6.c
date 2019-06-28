#include <stdio.h>
main()
{
    int m, n, x, y = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d integers: \n", n);
    while(n != 0)
    {
        scanf("%d", &m);
        x = m * pow(10, n-1);
        y = y + x;
        n--;
    }
    printf("%d", y);
}
