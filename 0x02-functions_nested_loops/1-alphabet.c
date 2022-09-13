#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet - prints lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void) /*prints lowercase alphabet*/
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
