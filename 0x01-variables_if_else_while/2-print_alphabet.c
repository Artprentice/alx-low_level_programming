#include <stdio.h>
#include <stdlib.h>
/**
 * main - main func
 * @void: default param
 * Return: always
 */
int main(void)
{
	/**
	 * for - loop
	 * @charr: variable
	 * Return: always 0
	 */
	char charr;
	
	for (charr = 'a'; charr <= 'z'; charr++)
	{
		putchar(charr);
		putchar('\n');
	}
	
	return (0);
}
