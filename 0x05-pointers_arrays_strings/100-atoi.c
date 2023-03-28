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

	while(*s)
	{
		if(*s == '-')
			sign = -sign;
		if(*s >= '0' && *s <= '9')
			result = result * 10 + (*s - '0');
		if(*s == '+' || (*s >= '0' && *s <= '9'))
			break;
		s++;
	}

	return sign * result;
}
