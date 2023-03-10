#include <stdio.h>
/**
 * main -> print all arguments it receives
 * @argc: arguments count
 * @argv: arguments vector and string
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
