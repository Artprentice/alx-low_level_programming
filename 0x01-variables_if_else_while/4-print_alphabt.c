#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry pt
 * @void: default param
 * Return: always 0
 */
int main(void)
{
	/**
	 * for - loop
	 * @charr: variable
	 * return: 0
	 */
	char charr;
	for (charr = 'a'; charr <= 'z'; charr++)
	{
		if (charr != 'e' && charr != 'q')
		{
			putchar(charr);
		}
	}
	putchar('\n');
	return (0);
}
