#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @ny: string to be converted
 * the two numbers and result of multiplication can be stored in integer
 * Return: the int converted from the string
 */

int _atoi(char *ny)
{
	int j, e, m, leng, f, digit;

	j = 0;
	e = 0;
	m = 0;
	leng = 0;
	f = 0;
	digit = 0;

	while (ny[leng] != '\0')
		leng++;

	while (j < leng && f == 0)
	{
		if (ny[j] == '-')
			++e;

		if (ny[j] >= '0' && ny[j] <= '9')
		{
			digit = ny[j] - '0';
			if (e % 2)
				digit = -digit;
			m = m * 10 + digit;
			f = 1;
			if (ny[j + 1] < '0' || ny[j + 1] > '9')
				break;
			f = 0;
		}
		j++;
	}

	if (f == 0)
		return (0);

	return (m);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * the program does not receive two arguments, program should print Error
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int answer, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	answer = num1 * num2;

	printf("%d\n", answer);

	return (0);
}
