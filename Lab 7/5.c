#include <stdio.h>
main ()
{
    int i, l, f = 1;
    char a[100];
    gets(a);
    l = strlen(a);
    if(l < 6) printf("Not valid");
    else
    {
        for(i = 0; i < l; i++)
        {
            if(a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z' || a[i] >= '0' && a[i] <= '9') continue;
            else
            {
                f = 0;
                break;
            }
        }
        if(f == 1) printf("Valid");
        else printf("Not valid");
    }
}
