#include <stdio.h>
#include "main.h"


int exponent(int x, int y)
{
	int power;

	power = x;

	if (x == 0)
		return (0);
	if (y == 0)
		return (1);

	while (y >= 2)
	{
		power  = power * x;
		y--;
	}
	return (power);
}

/**
 * print_number - print an int using only _putchar
 * Return: nothing
 **/

void print_number(int number)
{
	int size, digit;
	long counter, sign;

	sign = 1;
	digit = 0;
	size = 1;
	counter = number;

	if (number < 0)
	{
		_putchar('-');
		sign = -1;
		counter *= sign;
	}

	for (; counter >= 10; size++)
	{
		counter = counter / 10;
	}

	counter = sign * (long)number;

	while (size >= 2)
	{
		digit = (counter / exponent(10, size - 1));
		_putchar(digit + '0');
		counter = counter % exponent(10, size - 1);
		size--;
	}
	_putchar(counter % 10 + '0');
}
