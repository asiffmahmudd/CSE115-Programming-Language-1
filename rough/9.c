#include <stdio.h>
main ()
{
    int i, j;
    char a[3][3];
    for (i = 0; i < 3 ; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Enter: ");
            scanf("%c%*c", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for(j = i; j < 3; j++)
        {
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }
}
