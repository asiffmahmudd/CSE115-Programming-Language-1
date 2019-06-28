#include <stdio.h>
main()
{
    int a[5], b[5];
    int i, f = 0;
    for(i = 0; i < 5; i++)
    {
        printf("Enter a number for first array: ");
        scanf("%d", &a[i]);
        printf("Enter a number for second array: ");
        scanf("%d", &b[i]);
    }
    for(i = 0; i < 5; i++)
    {
        if(a[i] != b [i])
        {
            f = 1;
            break;
        }
    }
    if(f == 0) printf("Strictly identical");
    else printf("Not identical");
}
