#include "main.h"
/**
 * _strspn - Entry point
 * @ny: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *ny, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*ny)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*ny == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		ny++;
	}
	return (n);
}
