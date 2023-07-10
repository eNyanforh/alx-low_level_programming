#include "main.h"
/**
 * _strpbrk - Entry point
 * @ny: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *ny, char *accept)
{
	int j;

	while (*ny)
	{
		for (j = 0; accept[j]; j++)
		{
		if (*ny == accept[j])
		return (ny);
		}
	ny++;
	}

return ('\0');
}
