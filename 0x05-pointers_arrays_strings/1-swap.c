#include "main.h"

/**
 * swap_int - swaps the value of 2 ints
 * @a: the value to be swapped
 * @b: the 2nd value to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
