#include <stdio.h>

/**
 * main - entry point
 * Description: This program
 * prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char lw_alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; lw_alphabets[i] != '\0'; i++)
	{
		if (lw_alphabets[i] == 'q' || lw_alphabets[i] == 'e')
			continue;
		putchar(lw_alphabets[i]);
		if (lw_alphabets[i] == 'z')
			putchar('\n');
	}

	return (0);

}
