#include "main.h"
/**
 * main - prints _putchar, fllowd by a new linees
 * Return: Alwys 0 (Success)
 */
int main(void)
{
	char H[] = "_putchar";
	int c;
	for (c = 0; c < 8; c++)
	{
		_putchar(H[c]);
	}
	_putchar('\n');
	return (0);
}
