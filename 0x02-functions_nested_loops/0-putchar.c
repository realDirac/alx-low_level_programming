#include "main.h"

/**
 *  * main - Entry point
 *   * this script is to print _putchar without using the standard lib
 *    * also does not make use of the functions printf and puts
 *     * Return: Always 0 (Success)
 *      */
int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i=0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (0);
}
