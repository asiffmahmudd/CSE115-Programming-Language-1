#include <stdio.h>
main ()
{
    int a[3][3];
    int i, j, sum = 0;;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Enter element of array: ");
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if (i == j) sum = sum + a[i][j];
        }
    }
    printf("%d", sum);
}
