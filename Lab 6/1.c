#include <stdio.h>
main ()
{
    int n, i;
    float avg, sum = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    float a[n];
    for(i = 0; i < n; i++)
    {
        printf("Enter a number: ");
        scanf("%f", &a[i]);
        sum = sum + a[i];
    }
    avg = sum / n;
    printf("Average: %f", avg);
}
