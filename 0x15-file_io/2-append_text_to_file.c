#include "main.h"
/**
 * append_text_to_file - appends text to file
 * @filename: name of file in which to append text
 * @text_content: the strings or content to append.
 * Return: 1 on success, -1 on failure or NULL.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int r_write;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
 * _strlen - find length of string
 * @str: string
 * Return: length of string
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}
