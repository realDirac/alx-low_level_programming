#include "main.h"
/**
 * check_prime - detects if an input number is a prime number.
 * @n: input number.
 * @i: iterator
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i - 1));
}

/**
 * is_prime_number - calls to check the for prime numbers
 * @n: input number)
 * Return: primes
 */
int is_prime_number(int n)
{
	return (check_prime(n, n / 2));
}
