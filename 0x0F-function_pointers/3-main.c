#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 *  use atoi to convert arguments to int
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *opi;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	opi = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(opi) == NULL || opi[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opi == '/' && num2 == 0) ||
	    (*opi == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
		printf("%d\n", get_op_func(opi)(num1, num2));

	return (0);
}
