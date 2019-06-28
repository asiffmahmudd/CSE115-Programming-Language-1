#include <stdio.h>
main ()
{
    int a[5];
    int i, f;
    for (i = 0; i < 5; i++)
    {
        printf("Enter an element of the array: ");
        scanf("%d", &a[i]);
    }
    for(i = 1; i < 5; i++)
    {
        if(a[i - 1] > a[i])
        {
            f = 1;
            break;
        }
    }
    if ( f == 1) printf("Not sorted");
    else printf("Sorted");
}
