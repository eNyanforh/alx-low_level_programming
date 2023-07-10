#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: desta
 */

char *_strcat(char *dest, char *src)
{
	int n;
	int y;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[n] = src[y];
		n++;
		y++;
	}

	dest[n] = '\0';
	return (dest);
}
