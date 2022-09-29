#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print a string followed by a newline
 * @s: a pointer to the string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
