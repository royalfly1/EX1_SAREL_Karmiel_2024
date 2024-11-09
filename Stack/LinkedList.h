#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct LinkedList
{
	int num;
	struct LinkedList* next;
}LinkedList;

//function to add a new value into the linkedlist
void push(LinkedList** head, int newNum);

//function to pop the first value in the linkedlist
int pop(LinkedList** head);

#endif /* LINKEDLIST_H */