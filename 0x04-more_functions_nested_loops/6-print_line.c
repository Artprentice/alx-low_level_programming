#include "main.h"
/**
 * print_line - draw a line
 * Return: 0
 */
void print_line(int n)
{
	int i;
	
	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}

	_putchar('\n');
	return (0);
}
