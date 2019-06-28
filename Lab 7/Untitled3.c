#include <stdio.h>
main()
{
    char a[100], b[100];
    int i, p = 0;
    printf("Enter a word: ");
    gets(a);
    printf("Enter another word: ");
    gets(b);
    for(i = 0; i != '0/'; i++)
    {
        if(a[i] != b[i])
        {
            p = 1;
            break;
        }
    }
    if(p == 1) printf("not equal");
    else printf("Equal");

}
