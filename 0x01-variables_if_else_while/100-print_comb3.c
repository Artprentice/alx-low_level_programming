#include <stdio.h>
/**
 * main - entry
 * @void: var
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (b = a + 1; b < 10; b++)
	{
		putchar((a % 10) + '0');
		putchar((b % 10) + '0');
		if (a 00 8 && b == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
