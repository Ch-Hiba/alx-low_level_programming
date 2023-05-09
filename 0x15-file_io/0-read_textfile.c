#include "main.h"

/**
 * read_textfile -> reads a text file and prints the letters
 * @filename: filename
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t nrd, nwr;
	char *b;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	b = malloc(sizeof(char) * (letters));
	if (!b)
		return (0);

	nrd = read(f, b, letters);
	nwr = write(STDOUT_FILENO, b, nrd);

	close(f);

	free(b);

	return (nwr);
}
