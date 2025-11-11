#include <stdio.h>

int main() {
	int n, a = 0, b = 1, next, count = 1;

	printf("Enter a positive integer n: ");
	scanf("%d", &n);

	if (n <= 0) {
		printf("Please enter a positive number.\n");
		return 0;
	}
	printf("%d ", a);

	while (count < n) {
		printf("%d ", b);
		next = a + b;
		a = b;
		b = next;
		count++;
	}
	printf("\n");
	return 0;
}	
