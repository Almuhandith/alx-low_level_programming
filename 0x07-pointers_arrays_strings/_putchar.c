#include "main.h"
/**
 * _putchar - write the character to stdout
 * @c: character
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
