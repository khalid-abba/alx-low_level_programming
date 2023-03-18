#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prrints the alphaber
 * in lowercase, and then in uppercase
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char lw_alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	char up_alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j;

	for (i = 0; lw_alphabets[i] != '\0'; i++)
	{
		putchar(lw_alphabets[i]);
	}

	for (j = 0; up_alphabets[j] != '\0'; j++)
	{
		putchar(up_alphabets[j]);

		if (up_alphabets[j] == 'Z')
			putchar('\n');
	}


	return (0);
}
