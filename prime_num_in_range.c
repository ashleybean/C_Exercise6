#include <stdio.h>

int main() {
    int start, end;

    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d:\n", start, end);

    for (int n = start; n <= end; n++) {
        int isPrime = 1;

        if (n < 2) continue; 

        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", n);
        }
    }

    printf("\n");
    return 0;
}
