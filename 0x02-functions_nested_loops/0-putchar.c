#include <unistd.h>

/**
 * main - Entry point
 * this script is to print _putchar without using the standard lib
 * also does not make use of the functions printf and puts
 * Return: Always 0 (Success)
 */
int  main(void)
{
	char str[] ="_putchar\n";
	write(STDOUT_FILENO, str, sizeof(str) - 1);
	return (0);
}
