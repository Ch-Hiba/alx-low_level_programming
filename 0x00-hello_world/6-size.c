#include <stdio.h>
/**
 * main - the size of various types on the computer
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
       long long int d;
	float f;
	
	print("Size of a char: %lu byte(s)\n", sizeof(a));
	print("Size of a int: %lu byte(s)\n", sizeof(b));
	print("Size of a long int: %lu byte(s)\n", sizeof(c));
	print("Size of a long long int: %lu byte(s)\n", sizeof(d));
	print("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
