#include "LinkedList.h"
#include <iostream>

/*
* function to add a new value into the linkedlist
* input: head - the start of the linked list, newNum - the number we will add to the list
* output: none
*/
void insert(LinkedList** head, int newNum)
{
	LinkedList* newHead = new LinkedList;
	
	newHead->num = newNum;
	if (*head != NULL)
	{
		newHead->next = *head;
	}
	else
	{
		newHead->next = NULL;
	}
	*head = newHead;
}

/*
* function to pop the first value in the linkedlist
* input: head - the head of the linkedlist
* output: the number in the head
*/
int extract(LinkedList** head)
{

	if (*head == NULL)
	{
		return -1;
	}

	LinkedList* temp = *head;
	int extract = temp->num;

	*head = temp->next;
	delete(temp);

	return extract;
}