#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - function return 2 dimensional array of pointer
 * @width: integer width of the array
 * @height: integer hegit of the array
 * Return: point 2d array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arry;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arry = (int **)malloc(sizeof(int *) * height);

	if (arry == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arry[i] = (int *)malloc(sizeof(int) * width);
		if (arry[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arry[j]);
			}
			free(arry);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arry[i][j] = 0;
		}
	}
	return (arry);
}
