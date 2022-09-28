#include "main.h"

/**
 * _puts_recursion - prints a string with recursion
 * @s: string
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_putchar(s + 1);
	}
	_putchar('\n');
}
