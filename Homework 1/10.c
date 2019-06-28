#include <stdio.h>
int main ()
{
    int s, p, c;
    printf("Enter total selling price: ");
    scanf("%d", &s);
    printf("Enter profit: ");
    scanf("%d", &p);
    c = (s - p)/15;
    printf("%d", c);


    return 0;
}
