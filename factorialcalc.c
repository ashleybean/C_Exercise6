#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial does not exist for negative numbers.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("The factorial of %d is %lld.\n", n, factorial);

    return 0;
}
