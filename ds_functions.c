#include "shell.h"
/**
 * _init - initializes the list
 *
 * Return: An empty list with value null and length 0
 */
_list *_initialize()
{
	_list *ret;

	ret = (ls)malloc(sizeof(_list));
	if (ret)
	{
		ret->head = NULL;
		ret->tail = ret->head;
		ret->length = 0;
		ret->add = _add;
		ret->remove = _remove;
		ret->element_at = _element_at;
		return (ret);
	}
	return (NULL);
}
/**
 * _add - adds an element into the list
 *
 * @value: the value to be added to the list
 * @this: the list to add to
 * Return: a new list with the value added
 */
_list *_add(void *value, _list *this)
{
	_list *ret;
	ds *temp;

	if (!this)
	{
		ret = _initialize();
		ret->add(value, ret);
		return (ret);
	}
	temp = (ds *)malloc(sizeof(ds));
	if (temp)
	{
		temp->value = value;
		temp->next = NULL;
		if (this->head == NULL)
		{
			this->head = temp;
			this->tail = temp;
			temp->next = NULL;
			this->length += 1;
		}
		else
		{
			this->tail->next = temp;
			temp->next = NULL;
			this->tail = temp;
			this->length += 1;
		}
	}
	return (this);
}
/**
 *_element_at - return the element at index
 *
 *@index: index of the element to be reurned
 *@this: the list from which the element is to be extracted
 *Return: a void pointer to the value at index or, null
 */
void *_element_at(size_t index, _list *this)
{
	size_t i;
	ds *current;

	if ((index >= this->length) || !this)
		return (NULL);
	i = 0;
	current = this->head;
	while (i != index)
	{
		current = current->next;
		i++;
	}
	return (current->value);
}
/**
 *_remove - removes an element at index
 *
 *@index: the index at wwhich to delete
 *@this: the list to delete from
 *Return: a list with the specified value removed
 */
_list *_remove(size_t index, _list *this)
{
	size_t i;
	ds *current;

	if ((index >= this->length) || !this)
		return (NULL);
	i = 0;
	current = this->head;
	while (i != index)
	{
		current = current->next;
		i++;
	}
	if (current == this->head)
		return (_at_begining(this));
	else if (current == this->tail)
		return (_at_end(current, this));
	else
		return (_in_themiddle(current, this));
}
