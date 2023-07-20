#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Output format:
 * the opcodes should be printed in hexadecimal, lowercase
 * each opcode is two char long
 * listing ends with a new line
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int bytes, ny;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (ny = 0; ny < bytes; ny++)
	{
		if (ny == bytes - 1)
		{
			printf("%02hhx\n", arr[ny]);
			break;
		}
		printf("%02hhx ", arr[ny]);
	}
	return (0);
}
