#include "stack.h"
#include <iostream>

/*
* function to add a new value into the Stack
* input: head - the start of the Stack, newNum - the number we will add to the stack
* output: none
*/
void push(Stack** s, unsigned int element)
{
	Stack* newHead = new Stack;

	newHead->element = element;
	newHead->next = *s;
	*s = newHead;
}

/*
* this finction extracts the first element in the stack
* input: s - the head of the stack
* output: the element or -1 (if the stack is empty)
*/
int pop(Stack** s)
{
	Stack* temp = *s;
	int extract = temp->element;

	if (temp->next == NULL)
	{
		return -1;
	}

	*s = temp->next;
	delete(temp);

	return extract;
}


/*
* this function declares the head of the stack
* input: s - the head of the stack
* output: none
*/
void initStack(Stack* s)
{
	s->element = 0;
	s->next = NULL;
}


/*
* this function will free the memory that the stack takes
* input: head - the first person in the stack
* output: none
*/
void cleanStack(Stack* s)
{
	Stack* temp = NULL;
	while (s != NULL)
	{
		temp = s;
		s = s->next;
		delete(temp);
		temp = NULL;
	}
}
