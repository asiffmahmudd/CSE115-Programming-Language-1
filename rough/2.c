#include <stdio.h>
struct student
{
    int id;
    float x;
    float y;
    float z;
};
float highest(struct student e)
{
    float p;
    if (e.x > e.y)
    {
        if (e.x > e.z) p = e.x;
        else p = e.z;
    }
    else if (e.y > e.x)
    {
        if (e.y > e.z) p = e.y;
        else p = e.z;
    }
    else if (e.z > e.x)
    {
        if (e.z > e.y) p = e.z;
        else p = e.y;
    }
    return p;
}
main ()
{
    struct student a;
    float t, h;
    printf("Enter id: ");
    scanf("%d", &a.id);
    printf("Enter 1st subject's marks: ");
    scanf("%f", &a.x);
    printf("Enter 2nd subject's marks: ");
    scanf("%f", &a.y);
    printf("Enter 3rd subject's marks: ");
    scanf("%f", &a.z);
    t = a.x + a.y + a.z;
    h = highest(a);
    printf("Total: %f\n", t);
    printf("Highest: %f", h);
}
