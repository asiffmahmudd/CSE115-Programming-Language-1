#include <stdio.h>
main ()
{
    int i=1, factorial = 1, j=1;
    float e = 0;
    for (i = 1; i <= 1000; i++)
    {
        factorial = factorial * i;
        j = 1/factorial;
        if (j < 0.001)
        {
            break;
        }
        else
        {
            e = e + j;
        }
    }
    e = 1 + e;
    printf("e = %lf\nTerms = %d", e, i-1);
}
