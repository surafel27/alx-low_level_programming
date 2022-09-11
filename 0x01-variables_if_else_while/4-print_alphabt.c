#include <stdio.h>

/**
 * main - print the string inside printf
 *
 * Description: using the main fuction the program print sting inside
 * Return: Always 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}
	printf("\n");
	return (0);
}
