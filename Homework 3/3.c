#include <stdio.h>
main()
{
    int N, i;
    printf("Enter array size: ");
    scanf("%d", &N);
    int a[N];
    for (i = 0; i < N; i++)
    {
        printf("Enter an element of the array: ");
        scanf("%d", &a[i]);
    }
    for(i = 0; i < N; i++)
    {
        if(a[i] % 2 == 0) a[i] = a[i]/2;
        else a[i] = a[i] * 2;
    }
    for(i = 0; i < N; i++)
    {
        printf("%d\n", a[i]);
    }
}
