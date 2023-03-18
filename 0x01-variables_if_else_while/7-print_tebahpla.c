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
	int i;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	char len = strlen(alphabets);

	for (i = len - 1; i >= 0; i--)
		putchar(alphabets[i]);

	putchar('\n');

	return (0);
}
