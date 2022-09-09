#include <stdio.h>

/**
 * main - print the string inside printf
 *
 * Description: using the main fuction the program print sting inside
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch, ch2;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch2 = 'A'; ch2 <= 'Z'; ch2++)
	{
	putchar(ch2);
	}
	return (0);
}
