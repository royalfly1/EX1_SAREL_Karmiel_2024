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
	//if the queue is filled
	if (q->count >= q->maxSize)
	{
		std::cout << "You reached the limit size of your queue." << std::endl;
	}
	else if (newValue < 0)
	{
		std::cout << "ONLY positive numbers" << std::endl;
	}
	else
	{
		q->elements[q->count] = newValue;
		q->count++;
	}
}

/*
* this function pops out the first value in the queue
* input: q - the queue
* output: the number in the start of the queue
*/
int dequeue(Queue* q)
{
	int firstNum = q->elements[0];// getting the number we will return
	int i = 0, temp = 1;

	// a loop that moves the array one time to the left and overwrite the first value in the queue
	for (i = 0; i < q->count-1; i++)
	{
		q->elements[i] = q->elements[temp];
		temp++;
	}
	q->count--;//decreasing the count bea=cause we got rid of the first value

	return firstNum;
}

/*
* this function returns true if the queue is empty
* input: q - the queue
* output: true/false
*/
bool isEmpty(Queue* q)
{
	if (q->count == 0)
	{
		return true;
	}
	return false;
}

/*
* this function return true if the queue is full
* input: q - the queue
* output: true/false
*/
bool isFull(Queue* q)
{
	if (q->count == q->maxSize)
	{
		return true;
	}
	return false;
}
