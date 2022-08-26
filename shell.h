#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

typedef struct data_structure ds;
typedef struct list _list, *ls;
/**
 *struct data_structure - is a structur of a linked list where
 *pointer can be saved
 *@value: a void pointer that can store any type of pointer
 *@next: the pointer to the next node
 */
struct data_structure
{
	void *value;
	ds *next;
};
/* functions for list struct */
ls _add(void *, ls);
ls _remove(size_t, ls);
ls _at_end(ds *, ls);
ls _at_begining(ls);
ls _in_themiddle(ds *, ls);
void *_element_at(size_t, ls);
ls _initialize(void);
void _delete(ls);
char **_toarray_chardp(ls);

void *_memcpy(void *, void *, size_t);
char *_strdup(const char *);
int _strlen_recursion(const char *);
ls _arguments(char *, const char *);
ls _prompt_accept(void);
int _run(char *const, char *[]);
int _string_compare(char *const, char *const);
/**
 *struct list - is a data structure used to mimic list in c#
 *using linked list
 *@head: the head of the linked list
 *@tail: the tail of the linked list
 *@length: the no of elements in the linked list
 *@add: a function pointer to a function that adds an element
 *@remove: a function pointer toa function that removes at a given index
 *@element_at: a function pointer for a function that returns an element at
 *index
 */
struct list
{
	ds *head;
	ds *tail;
	size_t length;
	ls (*add)(void *, ls);
	ls (*remove)(size_t, ls);
	void* (*element_at)(size_t, ls);
};
#endif
