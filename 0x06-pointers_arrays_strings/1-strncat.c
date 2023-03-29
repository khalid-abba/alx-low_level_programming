#include "main.h"
/**
 * *_strncat -  concatenates two strings
 * @dest: parameter
 * @src: parameter
 * @n: bytes from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;

	while(src[j] != src[n])
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
