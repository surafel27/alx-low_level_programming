#include <stdio.h>

/**
 * main - print the string inside printf
 *
 * Description: using the main fuction the program print sting inside
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	printf("\n");
	return (0);
}
