#include "Stack.h"
#include "Utils.h"
#include <iostream>

void reverse(int* nums, unsigned int size)
{
	int i = 0;
	Stack* s = new Stack;
	initStack(s);

	for (i = 0; i < size; i++)
	{
		push(s, nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(s);
	}
	cleanStack(s);
}

/*
* this function will receive 10 numbers and will reverce them
* input: none
* output: the 10 numbers in a reversed order
*/
int* reverse10()
{
	int i = 0, size = 10;
	int* nums = new int[size];

	for (i = 0; i < size; i++)
	{
		std::cout << "Enter a number: ";
		std::cin >> nums[i];
	}
	reverse(nums, size);
	return nums;
}


