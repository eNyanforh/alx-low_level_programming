#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: numbers of arguments
 * @argv: arrays of arguments
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int iteration;

	for (iteration = 0; iteration < argc; iteration++)
	{
		printf("%s\n", argv[iteration]);
	}

	return (0);
}
