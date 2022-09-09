#include <stdio.h>
/**
 * main - entry
 * @void: def
 * Return: 0
 */
int main(void)
{
	/**
	 * for - loop
	 * @a: var
	 * @b: var
	 * Return: 0
	 */
	int a;

	int b;

	for (a = 0; a <= 9; a++);
	{
		for (b = 0; b <= 9; b++)
		{
			putchar(((a % 10) + '0' + ',') + (b % 10) + '0');
		}
		putchar('\n');
		return (0);
	}
}
