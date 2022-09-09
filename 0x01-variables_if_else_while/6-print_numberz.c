#include <stdio.h>
/**
 * main - entry pt
 * @void: default
 * Return: always
 */
int main(void)
{
	/**
	 * for - loop
	 * @dig: var
	 * Return: 0
	 */
	int dig;
	
	for (dig = 0; dig <= 9; dig++)
		putchar((dig % 10));

	putchar('\n');
	return (0);
}
