#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @ny: the character to be checked
 * Return: 1 if ny is a letter, 0 otherwise
 */
int _isalpha(int ny)
{
	return ((ny >= 'a' && ny <= 'z') || (ny >= 'A' && ny <= 'Z'));
}
