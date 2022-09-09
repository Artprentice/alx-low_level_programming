#include <stdio.h>
/**
 * main - entry
 * @void: default
 * Return: 0
 */
int main(void)
{
	/**
	 * for - loop
	 * @carr: variable
	 * Return: 0
	 */
	char charr;

	for (charr = 'z'; charr >= 'a'; charr--)
		putchar(charr);
	putchar('\n');
	return (0);
}

