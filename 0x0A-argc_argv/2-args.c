#include <stdio.h>
/**
 * main - prints all arguments recieved
 * @argc: number of arguments
 * @argv: number of strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
