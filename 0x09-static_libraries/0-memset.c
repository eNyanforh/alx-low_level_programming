#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @ny1: starting address of memory to be filled
 * @nb: the desired value
 * @h: number of bytes to be changed
 * Return: changed array with new value for h bytes
 */
char *_memset(char *ny1, char nb, unsigned int h)
{
	int j = 0;

	for (; h > 0; j++)
	{
		ny1[j] = nb;
		h--;
	}
	return (ny1);
}
