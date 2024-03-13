// C program to generate 10 random number using rand()
// function
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	// Loop through 10 times
	for (; i < 10; i++) {
		// Generate a random number using the rand()
		// function
		int value = rand();

		// Print the generated random value
		printf("%d ", value);
	}

	return 0;
}

