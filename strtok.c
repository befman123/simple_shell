#include "shell.h"
#include <string.h>
/**
 *arguments - return an array of strings
 *
 *@string: the string to be split
 *@delim: the delimeter
 *Return: array_t of string array value
 */
ls _arguments(char *string, const char *delim)
{
	ls ret;
	char *str;

	if (!string || !delim)
		return (NULL);
	ret = _initialize();
	str = NULL;
	do {
		if (ret->length == 0)
		{
			str = strtok(string, delim);
			if (str)
			{
				if (*(str + (_strlen_recursion(str) - 1)) == 10)
					*(str + (_strlen_recursion(str) - 1)) = 0;
				ret->add(str, ret);
			}
		}
		else
		{
			str = strtok(NULL, delim);
			if (str)
			{
				*(str + (_strlen_recursion(str) - 1)) = '\0';
				ret->add(str, ret);
			}
		}
	} while (str != NULL);
	return (ret);
}
