#include <stdio.h>
#include <stdlib.h>
/**
 * main - default func
 * @void: default param
 * Return: always
 */
int main(void)
{
	/**
	 * for - loop
	 * @char: variable
	 * Return: 0
	 */
	char charr;

	for (charr = 'a'; charr <='z'; charr++)
	{
		putchar(charr);
	}
        for (charr = 'A'; charr <='Z'; charr++)
	{
		putchar(charr);
	}
	putchar('\n');
	return (0);
}
