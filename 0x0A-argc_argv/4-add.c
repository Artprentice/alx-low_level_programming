#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the sum of possitive numbers
 * @argc: number of arguments
 * @argv: pointer arry to arguments strings
 * return: if error 1 else 0
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argv[1] < '0' || argv[1] > '9')
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[2] < '0' || argv[2] > '9')
	{
		printf("Error\n");
		return (1);
	}
	sum = argv[1] + argv[2];

	printf("%d\n", sum);
	return (0);
}
