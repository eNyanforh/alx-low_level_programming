#include "main.h"

/**
 * _isupper - uppercase letters
 * @ny: char to check
 * Return: 0 or 1
 */

int _isupper(int ny)
{
	if (ny >= 'A' && ny <= 'Z')
		return (1);
	else
		return (0);
}
