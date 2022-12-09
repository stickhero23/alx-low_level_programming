#include <unistd.h>
/**
 * _putchar - writes the character c to the stdout
 * @c: the character to print
 * Return: On succes 1, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
