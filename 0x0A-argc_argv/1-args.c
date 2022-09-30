#include "main.h"
#include <stdio.h>

/**
 * main - fuction print the number of arhument passed
 * @argc: the size of the argument
 * @argv: the array size of the argument
 * Return: Always (0)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	/*int counter;*/
	printf("%d\n", argc - 1);
	return (0);
}
