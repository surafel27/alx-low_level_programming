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
	int ch, num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (ch = 97; ch <= 102; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
