#include<stdio.h>
/**
 * main - main func
 * @void - main param
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

	printf("Char size: %zu\n", sizeof(char));
	printf("Int size: %zu\n", sizeof(int));
	printf("Double size: %zu\n", sizeof(double));
	printf("float size: %zu\n", sizeof(float));

	return (0);
}
