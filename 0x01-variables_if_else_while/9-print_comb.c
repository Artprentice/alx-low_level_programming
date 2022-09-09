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

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
		if (a <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
	}
