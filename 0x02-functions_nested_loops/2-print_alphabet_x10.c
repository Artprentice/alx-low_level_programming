#include "main.h"



/**
*
*  * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
*
*   */

void print_alphabet_x10(void)
{
	char letter;

	for (int count = 0; count <= 9; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
		_putchar('\n');
	}
}
