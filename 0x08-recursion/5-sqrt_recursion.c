#include "main.h"

/**
 * find_root - returns the natural square root of a number.
 * @n: input number.
 * @i: iterator
 * Return: square root or -1.
 */
int find_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (find_root(n, i + 1));
}

/**
 * _sqrt_recursion - checks if n is less than 0
 * @n: input number
 * Return: if true, returns -1 otherwise, calls find_root
 * find_root - finds the squar root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}
