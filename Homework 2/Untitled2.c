#include <stdio.h>
int main ()
{
    int a, x, c;
    c = -1;
    printf("Enter a five digit number: ");
    scanf("%d", &a);
    x = a%10;
    if(x > c) c = x;
    a = a/10;
    x = a%10;
    if(x > c) c = x;
    a = a/10;
    x = a%10;
    if(x > c) c = x;
    a = a/10;
    x = a%10;
    if(x > c) c = x;
    a = a/10;
    x = a%10;
    if(x > c) c = x;
    printf("%d", c);


    return 0;
}
