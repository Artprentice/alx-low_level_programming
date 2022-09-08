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

	printf("Size of a char: %zu\n", sizeof(char),"byte(s)");
	printf("Size of an int: %zu\n", sizeof(int),"byte(s)");
	printf("Size of a double: %zu\n", sizeof(double),"byte(s)");
	printf("Size of a float: %zu\n", sizeof(float),"byte(s)");

	return (0);
}
