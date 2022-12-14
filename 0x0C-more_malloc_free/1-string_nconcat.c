#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2
 * Return: pointer to the new memory
 * if it fails, return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int ls1, ls2, lsout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lsout = ls1 + n;

	p = malloc(lsout + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < ls1)
			p[i] = s1[i];
		else
			p[i] = s2[i - ls1];

	p[i] = '\0';

	return (p);
}
