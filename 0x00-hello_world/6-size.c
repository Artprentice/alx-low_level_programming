#include<stdio.h>
/**
 * main - main func
 * @void - main param
 * Return: default
 */
int main(void)
{
	/**
	 * printf - Print to output
	 * sizeof - prints size of var
	 * @char: size to be displayed
	 * @int : size to be displayed
	 * @double: size to be displayed
	 * @float: size to be displayed
	 * Return: 0
	 */
	char myChar;

	int myInt;

	double myDouble;

	float myFloat;

	long myLong;

	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(double));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
