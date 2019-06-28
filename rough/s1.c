#include <stdio.h>
struct account
{
    char n[50];
    int b;
};
main()
{
    struct account x, y;
    printf("Enter first person's name: ");
    gets(x.n);
    printf("Enter first person's balance: ");
    scanf("%d%*c", &x.b);
    printf("Enter second person's name: ");
    gets(y.n);
    printf("Enter second person's balance: ");
    scanf("%d", &y.b);
    if(x.b > y.b) printf("%s is richer", x.n);
    else printf("%s is richer", y.n);
}
