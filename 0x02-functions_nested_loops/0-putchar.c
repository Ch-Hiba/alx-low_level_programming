#include "main.h"
/**
 * main - print _putchar followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char putchar[] = "_putchar";
	int i = 0;

	while (putchar[i] != '\0')
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
