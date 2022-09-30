#include <stdio.h>
/**
 * main - prints the number of arguments
 *	passed into the program command
 *	line
 * @argc: number of arguments
 * @argv: Array of pointers to arguments string
 * Return: always 0
 */
int main(int argc, char __attribute((__unused__)) *argv[])
{
	printf("%d\n", argc);
	return (0);
}
