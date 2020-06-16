#include <iostream>
#include "Queue.h"

int main()
{
	setlocale(LC_CTYPE, "RUS");

	Queue* q1 = new Queue;
	Queue* q2 = new Queue;

	q1->push(1.19);
	q1->push(3.22);
	q1->push(5.44);
	q1->push(-7.55);

	q2->push(12.11);
	q2->push(11.99);
	q2->push(1.05);
	q2->push(-1.07);
	q2->push(-16.64);

	q1->out();
	printf("\n\n");
	q2->out();
	printf("\n\n");

	Queue* q3 = new Queue;

	q3 = q1->sort(q1, q2);
	q3->out();
}