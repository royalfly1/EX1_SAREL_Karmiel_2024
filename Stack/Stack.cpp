
#include "stack.h"
#include <iostream>

/*
* function to add a new value into the Stack
* input: head - the start of the Stack, newNum - the number we will add to the stack
* output: none
*/
void push(Stack* s, unsigned int element)
{
	insert(&(s->list), element);
}

/*
* this finction extracts the first element in the stack
* input: s - the head of the stack
* output: the element or -1 (if the stack is empty)
*/
int pop(Stack* s)
{
	return extract(&(s->list));
}


/*
* this function declares the head of the stack
* input: s - the head of the stack
* output: none
*/
void initStack(Stack* s)
{
	s->list = NULL;
}


/*
* this function will free the memory that the stack takes
* input: head - the first person in the stack
* output: none
*/
void cleanStack(Stack* s)
{
	LinkedList* list = s->list;
	LinkedList* temp = NULL;
	while (s->list != NULL)
	{
		temp = list;
		list = list->next;
		delete(temp);
		temp = NULL;
	}
}

/*
* this function will return true if the stack is empty or false if not
* input: s - the stack
* output: true/false
*/
bool isEmpty(Stack* s)
{
	int temp = extract(&(s->list));
	if (temp == -1)
	{
		return true;
	}
	push(s, temp);
	return false;
}