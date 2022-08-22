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
			ret->add(str, ret);
		}
		else
		{
			str = strtok(NULL, delim);
			ret->add(str, ret);
		}
	} while (str != NULL);
	return (ret);
}
