#include <stdio.h>
/**
 * main - entry
 * @void: param
 * Return: 0
 */
int main(void)
{
	/**
	 * for - loop
	 * @dig:var
	 * @charr:var
	 * Return: 0
	 */
	int dig;

	char charr;

	for (dig = 0; dig <= 9; dig++)
		putchar((dig % 10) + '0');

	for (charr = 'a'; charr <= 'f'; charr++)
		putchar(charr);

	putchar('\n');
	return (0);
}
