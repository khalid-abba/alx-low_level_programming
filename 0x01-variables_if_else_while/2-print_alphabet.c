#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints the alphabet
 * in lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; alphabets[i] != '\0'; i++)
	{
		putchar(alphabets[i]);
		if (alphabets[i] == 'z')
			putchar('\n');
	}
	return (0);
}
