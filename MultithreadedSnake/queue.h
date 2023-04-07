/**
* File: queue.h
*
* Author: Anjola Aina
* Last Modified: Tuesday, April 4th, 2023
*
* This file contains the structs and methods associated with initializing a queue,
* adding an element to the queue, and removing an element from the queue. The following website
* was used as a reference to create the queue abstract data type: https://www.codesdope.com/blog/article/making-a-queue-using-linked-list-in-c/
*/
#ifndef queue_h
#define queue_h
#include "cell.h"
#include "node.h"
#include "direction.h"

#define EMPTY_QUEUE 0
class Queue {
private:
	Node* front;
	Node* rear;
	int size;
public:
	Queue();
	~Queue();
	Node* get_front();
	Node* get_rear();
	int get_size();
	bool is_empty();
	void enqueue(Cell* cell_p);
	Node* dequeue();
};

#endif