#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
	int n;
	char a[100] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("%s %d and is greater than 5\n", a, n);
	}
	else if (n == 0)
	{
		printf("%s %d and is 0\n", a, n);
	}
	else if (n < 6 && n != 0)
	{

		printf("%s %d and is less than 6 and not 0", a, n);
	}
	return (0);
}
