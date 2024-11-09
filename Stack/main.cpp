#include "LinkedList.h"
#include <iostream>


int main()
{
	LinkedList* head = new LinkedList;
	head->num = -1;

	std::cout << "LInkedList test run:" << std::endl;

	push(&head, 1);
	push(&head, 4);
	push(&head, 9);

	while (head->num != -1)
	{
		std::cout << "the list is: " << pop(&head) << std::endl;
	}

	system("pause");
	return 0;
}