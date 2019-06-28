#include <stdio.h>
main()
{
    int n, i, s = 0;
    float a, c = 0.00;
    for(i = i;;)
    {
    printf("Enter integers, press 0 to stop: ");
    scanf("%d", &n);
    if(n == 0)
    {
        break;
    }
    else
    {
        s = s + n;
        c++;
    }
    }
    a = s/c;
    printf("Average: %0.2f", a);

}
