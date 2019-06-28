main() {
    int b, a;
    float r, b1, b2, b3;
    printf("Enter the initial balance: ");
    scanf("%d", &b);
    printf("Enter the interest rate: ");
    scanf("%f", &r);
    printf("Enter the annual fee: ");
    scanf("%d", &a);

    r = r/100;
    b1 = b*r + b - a;
    b2 = (b1*r + b1) - a;
    b3 = (b2*r + b2) - a;

    printf("The balance after 1 year: %f\n", b1);
    printf("The balance after 2 year: %f\n", b2);
    printf("The balance after 3 year: %f\n", b3);
}


