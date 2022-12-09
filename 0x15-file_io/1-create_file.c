#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created.
 * @text_content: content to put in created file
 * Return: 1 on success, -1 on failue or NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int r_write;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	r_write = write(fd, text_content, _strlen(text_content));
	if (r_write == -1 || r_write != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
/**
 * _strlen - get length of string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}
