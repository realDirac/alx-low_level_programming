#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int divisor = 1;
	int digit, i, sign;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		sign = -1;
	}
	else
	{
		sign = 1;
	}
	while (n / divisor != 0)
	{
		divisor *= 10;
	}
	divisor /= 10;
	for (i = divisor; i >= 1; i /= 10)
	{
		digit = (n / i) * sign;
		_putchar(digit + '0');
		n -= digit * i;
	}
}
