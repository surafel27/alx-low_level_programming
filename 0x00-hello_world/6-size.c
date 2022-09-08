#include <stdio.h>

/**
 * main - these function prints the size of the datatypes
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("\nSize of a char: %zd byte(s)", sizeof(char));
	printf("\nSize of an int: %zd byte(s)", sizeof(int));
	printf("\nSize of a long int: %zd byte(s)", sizeof(long int));
	printf("\nSize of a long long int: %zd byte(s)", sizeof(long long int));
	printf("\nSize of a float: %zd byte(s)", sizeof(float));
	return (0);
}
