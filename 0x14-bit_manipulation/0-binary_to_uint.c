#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * binary_to_uint - function converts binary into integer
 * @b: the binary passes as a string
 * Return: return the converted into binary of Null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, decimal = 0, reminder = 1;
	int i;

	if (b == NULL)
		return (0);
	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		if (b[i] == '1')
		{
			decimal += reminder;
		}
		reminder *= 2;
	}
	return (decimal);
}
