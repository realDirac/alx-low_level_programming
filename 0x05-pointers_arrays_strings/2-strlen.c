#include "main.h"
/**
 * _strlen - finds the length of a string
 * @s: sting pointer to the string to find length
 * Return: returns the length of sting passed
 */
int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != 0) /*increases to when last character is NULL*/
	{
		n++;
	}
	return (n);
}
