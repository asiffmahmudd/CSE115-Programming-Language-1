main () {
    int t, p;
    float o;
    printf("Enter total selling price: ");
    scanf("%d", &t);
    printf("Enter total profit: ");
    scanf("%d", &p);
    o = (t - p)/ 15.00;
    printf("The price of one item: %f", o);
}
