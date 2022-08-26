#include "shell.h"
/**
 *_to_array_chardp - converts a list to an array of char *
 *
 *@this: the list to convert
 *Return: char** of all elements in the list on success else null
 */
char **_toarray_chardp(ls this)
{
	char **ret;

	ret = (char **)malloc(sizeof(char *) * this->length);
	if (ret)
	{
		size_t i;

		for (i = 0; i < this->length; i++)
		{
			if (this->head)
				*(ret + i) = (char *)_element_at(i, this);
			else
				return (NULL);
		}
		return (ret);
	}
	return (NULL);
}
