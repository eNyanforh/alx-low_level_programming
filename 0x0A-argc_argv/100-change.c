#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * cents is the amount of cents you need to give back
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int nums, n, answer;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nums = atoi(argv[1]);
	answer = 0;

	if (nums < 0)
	{
		printf("0\n");
		return (0);
	}

	for (n = 0; n < 5 && nums >= 0; n++)
	{
		while (nums >= coins[n])
		{
			answer++;
			nums -= coins[n];
		}
	}

	printf("%d\n", answer);
	return (0);
}
