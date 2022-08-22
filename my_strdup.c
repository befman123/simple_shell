#include "shell.h"
/**
 *_strdup - copies a string into a freeable pointer
 *
 *@string: the string to be coppied
 *Return: char* containing the string
 */
char *_strdup(const char *string)
{
	int str_len, i;
	char *ret;

	str_len = _strlen_recursion(string);
	ret = (char *)malloc(sizeof(char) * (str_len + 1));
	if (ret)
	{
		i = 0;
		while (i < str_len)
		{
			*(ret + i) = *(string + i);
			i++;
		}
	}
	else
		return (NULL);
	*(ret + (str_len - 1)) = '\0';
	return (ret);
}
