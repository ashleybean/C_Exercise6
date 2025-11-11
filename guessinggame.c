#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//generate random num between one to twenty and ask user to guess the number
int main() {
	int guess, secret;
	
	srand(time(NULL));
	secret = rand() % 20 + 1; 

	printf("Guess the number between 1 and 20:\n");

	do {
		printf("Enter your guess: ");
		scanf("%d", &guess);

		if (guess > secret) {
			printf("Lower!\n");
		} else if ( guess < secret) {
			printf("Higher!\n");
		}
	} while (guess != secret);

	printf("Correct!\n");

	return 0;
}
