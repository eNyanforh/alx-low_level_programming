#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @ny: input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int ny)
{
	int n;

	n = 0;
	while (n < ny && src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	while (n < ny)
	{
		dest[n] = '\0';
		n++;
	}

	return (dest);
}
