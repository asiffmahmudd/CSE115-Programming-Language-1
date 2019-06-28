#include <stdio.h>
main ()
{
    int a[5] = {10, 1, 25, 9, 2};
    int i, id = 0, min = a[0];
    for(i = 4; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
    for(i = 0; i < 5; i++)
    {
        if(min > a[i])
        {
            min = a[i];
            id = i;
        }
    }
    printf("Minimum: %d, Index: %d", min, id);
}
