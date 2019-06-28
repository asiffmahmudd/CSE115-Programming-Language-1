main() {
    int a, b, c, max;
    printf("Enter a integer:");
    scanf("%d", &a);
    printf("Enter a integer:");
    scanf("%d", &b);
    printf("Enter a integer:");
    scanf("%d", &c);
    if(a>b) {
        if(a>c) max = a;
        else max = c;
    }
    else {
        if(b>c) max = b;
        else max = c;
    }
}
