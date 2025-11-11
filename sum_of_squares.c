#include <stdio.h>

int main() {
    int num, digit, sum = 0, temp, count = 0;
    int digits[10];

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digits[count++] = temp % 10;
        temp /= 10;
    }

    printf("The sum of the squares of the digits is ");
    
    for (int i = count - 1; i >= 0; i--) {
        digit = digits[i];
        sum += digit * digit;
    }

    printf("%d (", sum);

    for (int i = count - 1; i >= 0; i--) {
        digit = digits[i];
        printf("%d*%d", digit, digit);
        if (i != 0) {
            printf(" + ");
        }
    }

    printf(")\n");

    return 0;
}
