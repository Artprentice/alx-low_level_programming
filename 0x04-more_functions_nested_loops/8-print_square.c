#include "main.h"
/**
 * print_square - implied
 * @size: size
 * Return: 0
 */
void print_square(int size)
{
	int a = 0;
	int b = 0;

	if (size > 0)
	{
		while (a < size)
		{
			while (b < size)
			{
				_putchar('#');
				b++;
			}
			b = 0;
			a++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
