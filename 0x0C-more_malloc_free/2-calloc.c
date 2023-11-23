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
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
/** 
 * *_calloc - allocates memory for an array , using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *chm;

	if (nmemb == 0 || size == 0)
		return (NULL);

	chm = malloc(sizeof(int) * nmemb);

	if (chm == NULL)
		return (NULL);

	_memset(chm, 0, nmemb * sizeof(int));

	return (chm);
}
