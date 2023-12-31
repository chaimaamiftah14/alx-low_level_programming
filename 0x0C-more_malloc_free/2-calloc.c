#include"main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: canstant
 * @n: max bytes to use
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
/**
 * *_calloc - allocates memory for an array , using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *chm;

	if (nmemb == 0 || size == 0)
		return (NULL);

	chm = malloc(size * nmemb);

	if (chm == NULL)
		return (NULL);

	_memset(chm, 0, nmemb * size);

	return (chm);
}
