#include "main.h"

/**
 * _atoi - convert a string into an integer.
 * @ny: the string to use.
 * Return: integer.
 */

int _atoi(char *ny)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	while (!(ny[i] <= '9' && ny[i] >= '0') && ny[i] != '\0')
	{
		if (ny[i] == '-')
			sign *= -1;
		i++;
	}
	while (ny[i] <= '9' && (ny[i] >= '0' && ny[i] != '\0'))
	{
		res = (res * 10) + (ny[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
