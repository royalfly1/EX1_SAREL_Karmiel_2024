#include <iostream>
#include "Queue.h"

int main()
{
    Queue* q = new Queue;
    initQueue(q, 3); //initiate stack of size 3
    enqueue(q, 1);
    enqueue(q, 4);
    enqueue(q, 9);

    std::cout << "Queue test run:" << std::endl;

    while (!isEmpty(q))
    {
        std::cout << "Element was poped : " << dequeue(q) << std::endl;
    }

    cleanQueue(q);
    delete(q);

    system("pause");
    return 0;

}