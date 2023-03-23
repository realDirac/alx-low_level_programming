#include "main.h"

/**
 *main - Entry point
 *a function that prints the alphabet in lowercase
 *Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	    char letter = 'a';
	 while (letter <= 'z')
	    {
		    _putchar(letter);
		    letter++;
	    }
	    _putchar('\n');
}
