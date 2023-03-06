#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @src: memory area to be copied from.
 * @dest: memory area to put the copy.
 * @n: size of memory.
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
