#include <stdio.h>

void biggest() {
    int a, b;
    printf("Please Enter Integer:\n");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d is Largest\n", a);
    } else if (b > a) {
        printf("%d is Largest\n", b);
    } else {
        printf("Both are Equal\n");
    }
}
