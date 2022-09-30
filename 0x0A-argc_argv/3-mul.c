#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints multiplication of two numbers
 * @argc: number of arguments
 * @argv: pointer arry to the arguments
 * Return: if program recieves two args 0
 *	else 1
 */
int main(int argc, char *argv[])
{
	int num1, num2, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mult = num1 * num2;

	printf("%d\n", mult);
	return (0);
}
