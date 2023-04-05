#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * is_palindrome - function that works on string
 * @s: The string to be measured.
 * Return: The length of the string.
 */

int is_palindrome(char *s)
{
	int len = 0;
	int i = 0;

	while (s[len] != '\10')
		len++;

	while (i < len / 2)
	{
		if (s[i] != s[len - i - 1])
			return (0);
		i++;
	}

	return (1);
}
