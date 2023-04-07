#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t term, cell;
	char *buffer;

	if (filename == NULL)
		return (0);
	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(a);
		return (0);
	}
	term = read(a, buffer, letters);
	close(a);
	if (term == -1)
	{
		free(buffer);
		return (0);
	}
	cell = write(STDOUT_FILENO, buffer, term);
	free(buffer);
	if (term != cell)
		return (0);
	return (cell);
}
