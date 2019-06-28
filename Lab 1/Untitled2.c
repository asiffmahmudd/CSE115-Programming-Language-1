main() {
    int a, b, c, s;
    printf("Enter a integer:");
    scanf("%d", &a);
    printf("Enter a integer:");
    scanf("%d", &b);
    printf("Enter a integer:");
    scanf("%d", &c);
    if(a>b) {
        if(a>c) {
            if (b>c) {
                s = b;
            }
            else s = c;

        }
        else s = a;
    }
    else {
        if (b > c) {
            if (c >a) s = c;

            else s = a;
        }
        else s = b;
    }
    printf("%d",s);
}
