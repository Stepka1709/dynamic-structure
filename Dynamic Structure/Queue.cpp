#include "Queue.h"

Queue::Queue()
{
	queue = new double[size];
	bg = end = 0;
}

Queue::Queue(double num)
{
    queue = new double[size];
    bg = end = 0;

    for (int i = 0; i < num; i++)
    {
        push(i + 0.11);
    }
}

void Queue::push(double num)
{
    if (end + 1 == bg || (end + 1 == size && !bg))
    {
        printf("Очередь полна.");
    }
    end++;
    if (end == size) end = 0;
    queue[end] = num;
}

void Queue::out()
{
    for (int i = bg + 1; i < end + 1; i++)
    {
        printf("%.2f ", queue[i]);
    }
}

void Queue::pop()
{
    if (bg == end)
    {
        printf("Очередь пуста.");
    }
    bg++;
    if (bg == size) bg = 0;
}

double Queue::front()
{
    return queue[bg + 1];
}

double Queue::back()
{
    return queue[end];
}

Queue* Queue::sort(Queue* q1, Queue* q2)
{
    Queue* q = new Queue;

    for (int i = q1->bg; i < q1->end; i++)
    {
        q->push(q1->front());
        q1->pop();
    }

    for (int i = q2->bg; i < q2->end; i++)
    {
        q->push(q2->front());
        q2->pop();
    }

    for (int i = q->bg + 1; i < q->end + 1 - 1; i++)
    {
        for (int j = q->end + 1 - 1; j > i; j--)
        {
            if (q->queue[j - 1] > q->queue[j])
            {
                double temp = q->queue[j - 1];
                q->queue[j - 1] = q->queue[j];
                q->queue[j] = temp;
            }
        }
    }

    return q;
}