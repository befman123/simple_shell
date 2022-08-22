#include "shell.h"
/**
 *_delete_list - deletes a list entirely and free's ptrs
 *
 *@this: the node to be deleted
 *Return: 0 if successful -1 if not
 */
int _delete_list(ls this)
{
	size_t i;

	if (!this)
		return (-1);
	for (i = 0; i < this->length; i++)
		if (!this->remove(i, this))
			return (-1);
	free(this);
	return (0);
}
