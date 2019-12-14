#include "QueueType.h"
#include <iostream>

using namespace std;

void push(QueueType<int>* queue1, QueueType<int>* queue2, int value)
{
    // move all elements in Q1 to Q2
	while(!queue1->IsEmpty())
	{
		int temp;
        queue1->DeQueue(temp);
		queue2->EnQueue(temp);
	}

	// add the element which is pushed into Stack
	queue1->EnQueue(value);

	// move back all elements back to Q1 from Q2
	while(!queue2->IsEmpty())
	{
		int temp;
        queue2->DeQueue(temp);
		queue1->EnQueue(temp);
	}
}
int pop(QueueType<int>* queue1)
{
    int temp;
    queue1->DeQueue(temp);

    return temp;
}

int main()
{
    QueueType<int>* queue1 = new QueueType<int>();
    QueueType<int>* queue2 = new QueueType<int>();

    push(queue1, queue2, 1);
    push(queue1, queue2, 2);
    push(queue1, queue2, 3);
    push(queue1, queue2, 4);
    push(queue1, queue2, 5);

    cout << pop(queue1) << " ";
    cout << pop(queue1) << " ";
    cout << pop(queue1) << " ";
    cout << pop(queue1) << " ";
    cout << pop(queue1) << " ";
    cout << endl;

    return 0;
}

// 1 2 3 4 5
//
