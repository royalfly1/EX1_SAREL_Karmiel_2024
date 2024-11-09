#include "Stack.h"
#include <iostream>


int main()
{
	int i = 0;
	Stack* head = new Stack;
	initStack(head);

	std::cout << "Stack test run:" << std::endl;

	push(&head, 1);
	push(&head, 4);
	push(&head, 9);

	for (i = 0; i < 4; i++)
	{
		std::cout << "the Stack is: " << pop(&head) << std::endl;
	}

	cleanStack(head);

	system("pause");
	return 0;
}