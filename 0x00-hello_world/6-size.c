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
printf("Size of a char: %lu byte(s),sizeof(a));
printf("Size of a int: %lu byte(s)\n",sizeof(b));
printf("Size of a long int: %lu bytes(s)\n",sizeof(c));
printf("Size of a long long int: %lu bytes(s)\n",sizeof(d));
printf("Size of a float: %lu bytes(s)\n",sizeof(f));
	return (0);
}
