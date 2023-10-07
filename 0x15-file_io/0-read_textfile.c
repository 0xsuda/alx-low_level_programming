#include "main.h"
#include <stdlib.h>

/**
 * read_f- Read to print  STDOUT.
 * @filename: text file being read
 * @letters: num to read
 * Return: w- num of bytes
 *        0 when  NULL.
 */
ssize_t read_f(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
