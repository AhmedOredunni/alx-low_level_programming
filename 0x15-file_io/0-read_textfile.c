#include "main.h"
#include <stdlib.h>

/**
 *read_textfile - Read text file to standard output
 *@filename: the name of the file to read from
 *@letters: The amount of letters to read
 *
 *Return: Return the number of byte read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t byteread;
	ssize_t to_write;
	char *buffer;

	/* Open the file*/
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	byteread = read(fd, buffer, letters);
	to_write = write(1, buffer, byteread);

	free(buffer);
	close(fd);
	return (to_write);
}
