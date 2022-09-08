#include <stdio.h>

/**
 * main - these function prints the size of the datatypes
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zd byte(s)\n", sizeof(char));
	printf("Size of an int: %zd byte(s)\n", sizeof(int));
	printf("Size of a long int: %zd byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zd byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zd byte(s)\n", sizeof(float));
	return (0);
}
