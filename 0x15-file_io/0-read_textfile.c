#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the
 * POSIX standard output
 *
 * @filename: Name of the text file to be created
 *
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it prints, 0 if the
 * file cannot be opened or read, 0 if filename is NULL, and
 * 0 if write fails or does not write the expected amount of
 * bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(o);

	return (w);
}
