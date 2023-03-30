#include <stdio.h>

/**
 * hare - function that prints a string
 * before the main function is executed
 */

void __attribute__ ((constructor)) hare()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
