#include <iostream>
#include "Queue.h"

/*
* this function creates a queue with a place for "size" numbers
* input: q - the queue, size - the number of places in the queue
* output: none
*/
void initQueue(Queue* q, unsigned int size)
{
	q->maxSize = size;
	q->elements = new int[size];
	q->count = 0;
}

/*
* this function deletes the queue and resets all the data
* input: q - the queue that we clean
* output: none
*/
void cleanQueue(Queue* q)
{
	delete[] q->elements;
}

/*
* this function adds a number into the end of the queue.
* if the queue is full, it will tell the user that and will not add the number
* input: q - the queue, newValue - the number that we add to the end
* output: none
*/
void enqueue(Queue* q, unsigned int newValue)
{
	if (q->count == q->maxSize)
	{
		std::cout << "You reached the limit size of your queue.\n" << std::endl;
	}
	else
	{
		q->elements[q->count] = newValue;
		q->count++;
	}
}