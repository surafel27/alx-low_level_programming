#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0 (Success)
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
