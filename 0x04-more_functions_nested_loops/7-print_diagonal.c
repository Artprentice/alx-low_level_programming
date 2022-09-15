#include "main.h"
/**
 * print_diagonal - draws a diagonal
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, gap;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (bar = 0; bar < i; bar++)
				_putchar(' ');
			_putchar('\\');

			if (gap == n - 1)
				continue;
			
			_putchar('\n');
		}
	}
	-putchar('\n');
	return (0);
}
