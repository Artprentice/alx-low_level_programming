#include <stdio.h>
/**
 * main - prints name of program followed by new line
 * @argc: number of arguments in command line
 * @argv: Array of pointers to arguments
 * Return: always 0
 */
int main(int __attribute((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
