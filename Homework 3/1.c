#include <stdio.h>
main()
{
    int a[10];
    int i, n, f = 0;
    for(i = 0; i < 10; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", &a[i]);
    }
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 0; i < 10; i++)
    {
        if(a[i] == n) f++;
    }
    if(f == 0) printf("not found");
    else printf("%d occurred %d times in the array", n, f);
}
