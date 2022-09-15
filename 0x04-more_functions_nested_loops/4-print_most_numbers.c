#include "main.h"
/**
 * print_most_numbers - print 0 - 9 except 2 & 4
 * Return: 0 always
 */
void print_most_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
		c++
	}
	_putchar('\n');
	return (0);
}
