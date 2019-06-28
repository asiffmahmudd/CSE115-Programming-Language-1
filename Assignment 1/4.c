#include <stdio.h>
main ()
{
    int n, t, r = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;
    do{
        r = r*10;
        r = r + t%10;
        t = t/10;
    }
    while(t != 0);
    if(r == n)
    {
        printf("The number is a palindrome");
    }
    else {
        printf("The number is not a palindrome");
    }
}
