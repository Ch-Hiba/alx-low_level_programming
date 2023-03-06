#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: The string to check.
 * @c: character to be identified.
 * Return: pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < *s; i++)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
