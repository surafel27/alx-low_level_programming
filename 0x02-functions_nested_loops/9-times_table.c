#include <stdio.h>

/**
 * times_table - prints the 9 times of the table
 *
 * Return: the resut of the time tables
 */
int time_table(void)
{
	int i, j, mul_val;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <=9; j--)
		{
			mul_val = i * j;
			if (i == 0)
			{
				_putchar(mul_val + '0');
			}
			else if (mul_val >= 9)
			{
				_putchar(32);
				_putchar(mul_val / 10 + '0');
				_putchar(mul_val % 10 + '0');
			}
			else
			{
				_putchar(32);
				_putchar(32);
				_putchar(mul_val + '0');
			}
			if (i != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
