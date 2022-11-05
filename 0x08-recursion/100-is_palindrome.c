#include "main.h"
/**
 * is_palindrome - checks if palindrome
 * @s: char array
 * Return: 1 if plaindrome
  */
int is_palindrome(char *s)
{
	int length;

	length = get_len(s) - 1;

	return (my_palindrome(s, --length));
}
/**
 * get_len - gets length of string
 * @s: string
 * Return: return length of the string.
 */
int get_len(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + get_len(++s));
}
/**
 * my_palindrome - check if it is a palidrome
 * @s: string
 * @l: length of the string
 * Return: 1 is palindrome or 0 if not
 */
int my_palindrome(char *s, int l)
{
	if (*s == *(s + 1))
	{
		if (l <= 0)
			return (1);
		else
			return (my_palindrome(++s, l - 2));
	}
	else
		return (0);
}
