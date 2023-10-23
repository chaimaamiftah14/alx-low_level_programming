#include "main.h"
/**
 * _strspn - function that gets the length of prefix substring
 * @s: first value - char
 * @accept: second value - char
 *
 * Return: char with result
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int index = 0;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == ' ')
			break;
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
				index++;
		}
	}
	return (index);
}
