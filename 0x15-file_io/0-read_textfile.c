#include "main.h"
/**
 * read_textfile - reads text file to print to POSIX
 * @filename: char of string of file name
 * @letters: number of letters to read and print
 * Return: number of letters ead and printed, or
 * 0 if error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r_read, r_wrote;
	char *buffsize;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffsize = malloc(sizeof(char) * letters);
	if (buffsize == NULL)
		return (0);

	r_read = read(fd, buffsize, letters);
	if (r_read == -1)
	{
		free(buffsize);
		close(fd);
		return (0);
	}

	r_wrote = write(STDOUT_FILENO, buffsize, r_read);
	if (r_wrote == -1)
	{
		free(buffsize);
		close(fd);
		return (0);
	}
	close(fd);
	return (r_read);
}
