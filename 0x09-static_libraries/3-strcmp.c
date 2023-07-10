#include "main.h"

/**
 * _strcmp - compare string values
 * @n1: input value
 * @y2: input value
 *
 * Return: n1[y] - y2[h]
 */

int _strcmp(char *n1, char *y2)
{
	int h;

	h = 0;
	while (n1[h] != '\0' && y2[h] != '\0')
	{
		if (n1[h] != y2[h])
		{
			return (n1[h] - y2[h]);
		}
	h++;
	}
	return (0);
}
