#include <stdio.h>
struct employee
{
    int id;
    int a;
    float s;
};
struct employee salary(struct employee x[], int y)
{
    int i, t;
    float p;
    p = x[0].s;
    for(i = 1; i < y; i++)
    {
        if (p < x[i].s)
        {
            p = x[i].s;
            t = i;
        }
    }
    return x[t];
}
main ()
{
    int n, i;
    struct employee h;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct employee e[n];
    for(i = 0; i < n; i++)
    {
        printf("Enter id of employee number %d: ", i+1);
        scanf("%d", &e[i].id);
        printf("Enter age of employee numeber %d: ", i+1);
        scanf("%d", &e[i].a);
        printf("Enter salary of employee numeber %d: ", i+1);
        scanf("%f", &e[i].s);
    }
    h = salary(e, n);
    printf("Id: %d\nAge: %d\nSalary: %f", h.id, h.a, h.s);
}
