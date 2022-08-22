#include "shell.h"
/**
 *_strlen_recursion - counts the no of chars in a char*
 *@s: the string to be counted
 *Return: Returns the length of a string
 */
int _strlen_recursion(const char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
