#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *n = haystack;
		char *y = needle;

		while (*n == *y && *y != '\0')
		{
			n++;
			y++;
		}

		if (*y == '\0')
			return (haystack);
	}

	return (0);
}
