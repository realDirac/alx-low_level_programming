#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * is_palindrome - function that works on string
 * check_palindrome - function checking palindrome
 * _strlen_recursion - function checking string length
 * @s: The string to be measured.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

int check_palindrome(char *s, int start, int end)

{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}

int is_palindrome(char *s)

{
	int len = _strlen_recursion(s);

	return (check_palindrome(s, 0, len - 1));
}
