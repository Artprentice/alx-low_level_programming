#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main func
 * @void: default param
 * Return: always
 */
int main(void)
{
	/**
	 * print - answer
	 * @y: last number
	 * Return: 0
	 */
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int y = n % 10;
	if (y > 5)
	{
		printf("Last digit of %d is %d, and is greater than 5\n", n, y);
	} else if (y == 0)
	{
		printf("Last digit of %d is %d, and is 0\n", n, y);
	} else if (y < 6 && y != 0)
	{
		printf("Last digit of %d is %d, and is less than 6 and not 0\n", n, y);
	}
	return (0);
}
