#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: the alphabet a to z 10 times
 */
void print_alphabet_x10(void)
{
	int num = 0;
	char ch;

	while (num < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		num++;
		_putchar('\n');
	}
}
