#include <stdio.h>
main()
{
    int N, i, f = 0;
    printf("Enter array size: ");
    scanf("%d", &N);
    int a[N];
    for (i = 0; i < N; i++)
    {
        printf("Enter an element of the array: ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < N; i++)
    {
        if(a[i] == a[i+1] && a[i] == a[i+2]) f = 1;
    }
    if (f == 1) printf("found");
    else printf("not found");
}
