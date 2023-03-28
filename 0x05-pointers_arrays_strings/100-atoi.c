#include "main.h"

/**
 * _atoi - converts a sring to an integer
 * @s: inputs a string
 * Return: int
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit_found = 0;

	while (*s)
	{
		if (*s == '-' || *s == '+')
		{
			if (digit_found)
				break;
			sign = (*s == '-')? -1 : 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit_found = 1;
			result = result * 10 + (*s - '0');
		}
		else if (digit_found)
		{
			break;
		}
		s++;
	}

	return (sign * result);
}
