#include <stdio.h>
struct student
{
    int id;
    float x;
    float y;
    float z;
};
main()
{
    float t, h;
    struct student m, n;
    printf("Enter id: ");
    scanf("%d", &m.id);
    printf("Enter 1st subject's marks: ");
    scanf("%f", &n.x);
    printf("Enter 2nd subject's marks: ");
    scanf("%f", &n.y);
    printf("Enter 3rd subject's marks: ");
    scanf("%f", &n.z);
    t = n.x + n.y + n.z;
    h = n.x;
    if(h < n.y)
    {
        h = n.y;
        if(h < n.z) h = n.z;
        else h = n.y;
    }
    if(h < n.z)
    {
        h = n.z;
        if(h < n.y) h = n.y;
        else h = n.z;
    }
    printf("Total marks: %f\n Average: %f", t, h);
}
