#include <unistd.h>

/**
 * main - writes the character of c to stdout
 * @c: character to print
 *
 * Return: On success 1
 * On error, -1 is returned, the errno is set appropraitely
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
