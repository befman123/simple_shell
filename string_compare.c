#include "shell.h"
/**
 *_string_comare - compares if two strings are exactly the same
 *
 *@str_a: the first string
 *@str_b: the second string
 *Return: 1 if exact 0 if not
 */
int _string_compare(char *const str_a, char *const str_b)
{
	int i;

	if (_strlen_recursion(str_a) == _strlen_recursion(str_b))
	{
		i = 0;
		while (i < _strlen_recursion(str_b))
		{
			if (*(str_a + i) != *(str_b + i))
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}
