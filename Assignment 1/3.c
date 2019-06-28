#include <stdio.h>
main ()
{
    int x, y, i, m, lcm;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    m = x*y;
    for(i = 1; i <= m; i++)
    {
        if(i%x == 0 && i%y == 0)
        {
            lcm = i;
            break;
        }

    }
    printf("%d", lcm);
}
