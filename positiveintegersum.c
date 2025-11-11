#include <stdio.h>

//calculate and print the sum of user input integers; stop when input is non-negative number
int main() {
	int integers, sum = 0;

	printf("Enter a series of positive integers: ");
	
	while (scanf("%d", &integers) == 1) {
		if (integers <= 0) {
			break; 
		}
		sum += integers;
	}

	printf("Sum is: %d\n", sum);

	return 0;
}

