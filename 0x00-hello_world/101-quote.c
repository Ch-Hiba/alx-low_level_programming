#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - print a line to the standard
 * Return: 1 (success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
