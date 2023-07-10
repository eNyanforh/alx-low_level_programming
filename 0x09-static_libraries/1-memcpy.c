#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@ny: number of bytes
 *Return: copied memory with ny byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int ny)
{
	int rr = 0;
	int j = ny;

	for (; rr < j; rr++)
	{
		dest[rr] = src[rr];
		ny--;
	}
	return (dest);
}
