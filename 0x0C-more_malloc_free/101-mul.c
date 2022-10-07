#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - fuction to do multiplication
 * @argc: integer number
 * @argv: arraye of argument passed
 * Return: 0 on sucess, 98 on fail
 */

int main(int argc, char **argv)
{
	unsigned int mul, num1, num2, j;
	int x, i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!(argv[i][j] >= 48 && argv[i][j] <= 57))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	/*for (x = 0; *argv[x] != '\0'; x++)
		;
	s = malloc(sizeof(int) * x);
	if (s == NULL)
	{
		return (0);
	}*/

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	/* s = mul;*/
	printf("%d\n", mul);
	return (0);
}
