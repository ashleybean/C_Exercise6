#include <stdio.h>

//user inputs a positive int; display its multiplcation table up to ten.
int main() {
	int integer;

	printf("Enter a positive integer: ");
	scanf("%d", &integer);

	for (int i=1; i <= 10; i++) {
		printf("%d * %d = %d\n", integer, i, integer * i);
	}
	return 0;
}
