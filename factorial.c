#include <stdio.h>

void factorial() {
    int n, i, fact = 1;

    printf("Enter an  integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d is %d\n", n, fact);
    }
}
