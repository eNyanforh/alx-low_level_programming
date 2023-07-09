#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @string: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *string)
{
	int j, e, m, len, g, digit;

	j = 0;
	e = 0;
	m = 0;
	len = 0;
	g = 0;
	digit = 0;

	while (string[len] != '\0')
		len++;

	while (j < len && e == 0)
	{
		if (string[j] == '-')
			++e;

		if (string[j] >= '0' && string[j] <= '9')
		{
			digit = string[j] - '0';
			if (e % 2)
				digit = -digit;
			m = m * 10 + digit;
			g = 1;
			if (string[j + 1] < '0' || string[j + 1] > '9')
				break;
			g = 0;
		}
		j++;
	}

	if (g == 0)
		return (0);

	return (m);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int ans, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	ans = num1 * num2;

	printf("%d\n", ans);

	return (0);
}
