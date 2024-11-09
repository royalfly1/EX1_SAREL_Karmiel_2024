#include "LinkedList.h"
#include <iostream>

/*
* function to add a new value into the linkedlist
* input: head - the start of the linked list, newNum - the number we will add to the list
* output: none
*/
void push(LinkedList** head, int newNum)
{
	LinkedList* newHead = new LinkedList;
	
	newHead->num = newNum;
	newHead->next = *head;
	*head = newHead;
}

/*
* function to pop the first value in the linkedlist
* input: head - the head of the linkedlist
* output: the number in the head
*/
int pop(LinkedList** head)
{
	LinkedList* temp = *head;
	int extract = temp->num;

	*head = temp->next;
	delete(temp);

	return extract;
}