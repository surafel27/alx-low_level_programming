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
	int n, s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	s = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, s);
	}
	else if (n == 0 && s == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, s);
	}
	else if (n > 6 && n != 0)
	{

		printf("Last digits of %d is %d and is less than 6 and not 0", n, s);
	}
	return (0);
}
