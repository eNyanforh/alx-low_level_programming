#include "main.h"
/**
 * _strlen - returns the length of a string
 * @ny: string
 * Return: length
 */
int _strlen(char *ny)
{
	int longi = 0;

	while (*ny != '\0')
	{
		longi++;
		ny++;
	}

	return (longi);
}
