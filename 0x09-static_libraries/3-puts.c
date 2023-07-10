#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @strin: string to print
 */
void _puts(char *strin)
{
	while (*strin != '\0')
	{
		_putchar(*strin++);
	}
		_putchar('\n');
}
