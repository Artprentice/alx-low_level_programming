#include <stdio.h>
#include<stdlib.h>
/**
 * main - entry pt
 * @void:default param
 * Return: always 0
 */
int main(void)
{
	/**
	 * for - loop
	 * @dig: variable
	 *Return: 0
	 */
	int dig;

	for (dig = 0; dig <= 9; dig++)
		printf("%d", dig);

	printf("\n");
	return (0);
}
