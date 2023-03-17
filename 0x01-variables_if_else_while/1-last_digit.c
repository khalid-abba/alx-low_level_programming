#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 *
 * Description: This program will
 * assign a random number to the variable n each time it is executed
 * Return: 0
 */
int main(void)
{
	int n;
	int last_digit;
	char shrtstr[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else
		printf("%s %d is %d and is less than 6 and not 0\n", shrtstr, n, last_digit);

	return (0);
}
