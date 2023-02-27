#include "main.h"

/**
 * _strcpy - copy a string to another
 * @dest: the string to be copied to
 * @src: the string to be copied
 * Return: pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; ++i)
		dest[i] = src[i];
	dest[i] = src[i];
	return (&dest[0]);
}
