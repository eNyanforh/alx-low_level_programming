#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @ny: input
 * @nc: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *ny, char nc)
{
	int j = 0;

	for (; ny[j] >= '\0'; j++)
	{
		if (ny[j] == nc)
			return (&ny[j]);
	}
	return (0);
}
