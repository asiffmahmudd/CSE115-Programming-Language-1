#include <stdio.h>
int main ()
{
    int a, b;
    while(1 == 1)
    {
        printf("Enter A & B: ");
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0)
        {
            break;
        }
        else
        {
            printf("%d\n", a*b);
        }
    }
    return 0;
}
