#include "shell.h"
/**
 *_at_end - removes the last element in the list
 *
 *@current: the pointer to the node at index
 *@this: a pointer to the entire list
 *Return: @this
 */
ls _at_end(ds *current, ls this)
{
	ds *temp;

	temp = this->head;
	while (temp->next != current)
		temp = temp->next;
	free(temp->next->value);
	free(temp->next);
	this->tail = temp;
	this->tail->next = NULL;
	this->length -= 1;
	return (this);
}
/**
 *_at_beginning - removes the first element in the list
 *
 *@this: a pointer to the entire list
 *Return: @this
 */
ls _at_begining(ls this)
{
	free(this->head->value);
	free(this->head);
	this->length -= 1;
	this->head = NULL;
	this->tail = this->head;
	return (this);
}
/**
 *_in_themiddle - deletes the element in the middle of the list
 *
 *@current: the pointer to the node at index
 *@this: a pointer to the entire list
 *Return: @this
 */
ls _in_themiddle(ds *current, ls this)
{
	ds *temp;

	temp = this->head;
	while (temp->next != current)
		temp = temp->next;
	temp->next = current->next;
	free(current->value);
	free(current);
	this->length -= 1;
	return (this);
}
