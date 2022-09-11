#include <stdio.h>
/**
 * main - print the string inside the function
 *
 * Description: using the main fuction the program print sting inside
 * Return: Always 0 (Success)
 */
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num < 57)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
