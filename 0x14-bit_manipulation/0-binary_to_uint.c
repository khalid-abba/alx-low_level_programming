#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int lengh, base_2;

	if (!b)
		return (0);

	ui = 0;

	for (lengh = 0; b[lengh] != '\0'; lengh++)
		;

	for (lengh--, base_2 = 1; lengh >= 0; lengh--, base_2 *= 2)
	{
		if (b[lengh] != '0' && b[lengh] != '1')
		{
			return (0);
		}

		if (b[lengh] & 1)
		{
			ui += base_2;
		}
	}

	return (ui);
}
