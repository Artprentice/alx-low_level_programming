#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main func
 * @void: default param
 * Return: always
 */
int main(void)
{
	/**
	 * if - conditional
	 * @n: number to be checked
	 * Return: 0
	 */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
	return(0);
}
