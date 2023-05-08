#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints to standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: number of bytes printed, or 0 if failed to open file or malloc buffer
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, t, w;

	/* check if filename is null */
	if (filename == NULL)
		return (0);

	/* open file and check if successful */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* allocate memory for buffer */
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	/* read from file into buffer */
	t = read(fd, buf, letters);
	if (t == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	/* write buffer to standard output */
	w = write(STDOUT_FILENO, buf, t);
	if (w == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	/* free buffer and close file */
	free(buf);
	close(fd);

	return (w);
}
