#include "main.h"

/**
 * _abs - computes the absolute function
 *
 * @r: input number as an integer
 *
 * Returns: Absolute value
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}
