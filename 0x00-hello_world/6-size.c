#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Desription: prints various data type sizes
 *     * Return: 0 (Success)
 *      */
int main(void)
{
		char c;
		int i;
		long int li;
		long long int lli;
		float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(li));
	rintf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
  return (0);
}
