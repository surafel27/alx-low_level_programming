#include <stdio.h>

/**
 * main - these function prints the size of the datatypes
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("\nSize of a char: %ld byte(s)", sizeof(char));
	printf("\nSize of an int: %ld byte(s)", sizeof(int));
	printf("\nSize of a long int: %ld byte(s)", sizeof(long int));
	printf("\nSize of a long long int: %ld byte(s)", sizeof(long long int));
	printf("\nSize of a float: %ld byte(s)", sizeof(float));
	return (0);
}
