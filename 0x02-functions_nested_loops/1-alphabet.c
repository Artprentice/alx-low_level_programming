#include "main.h"
/**
 * main - entry
 * Return: always
 */
void print_alphabet(void)
{	
	/**
	 * for - loop
	 * _putchar - prints
	 * Return: always
	 */
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
