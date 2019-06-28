struct bankAccount{
    char name[40];
    double b;
};

main(){
    struct bankAccount b1,b2;

    printf("Enter name of first Person: ");
    gets(b1.name);
    printf("Enter balance: ");
    scanf("%lf",&b1.b);
    printf("Enter name of second Person: ");
    gets(b2.name);
    printf("Enter balance: ");
    scanf("%lf",&b2.b);

    if(b1.b > b2.b)
        printf("%s is richer",b1.name);
    else
        printf("%s is richer",b2.name);


}
