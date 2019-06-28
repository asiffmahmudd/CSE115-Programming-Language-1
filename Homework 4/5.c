#include <stdio.h>
main ()
{
    int b, x, y, i, m = 1;
    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("Enter another integer: ");
    scanf("%d", &y);
    if(x > y) b = y;
    else b = x;
    for(i = b; i >= 1; i--)
    {
        if(x%i == 0 && y%i == 0)
        {
            m = i;
            break;
        }
    }
    printf("GCM: %d", m);
}
