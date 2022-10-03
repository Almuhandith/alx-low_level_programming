#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer that contains a copy of the string
 * given as a parameter
 * @str: given string
 * Return: returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *string;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	string = malloc(sizeof(char) * (i + 1));

	if (string == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		string[j] = str[j];

	return (string);
}
