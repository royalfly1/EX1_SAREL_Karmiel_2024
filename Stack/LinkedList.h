#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct LinkedList
{
	unsigned int num;
	struct LinkedList* next;
}LinkedList;

//function to add a new value into the linkedlist
void insert(LinkedList** head, int newNum);

//function to pop the first value in the linkedlist
int extract(LinkedList** head);

#endif /* LINKEDLIST_H */