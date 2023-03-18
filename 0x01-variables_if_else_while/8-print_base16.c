#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 *
 * description: This program
 * prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int i, j;
	char alphabets[] = "abcdef";

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	for (j = 0; alphabets[j] != '\0'; j++)
		putchar(alphabets[j]);

	putchar('\n');

	return (0);
}
