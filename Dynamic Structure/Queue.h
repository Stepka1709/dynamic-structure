#include <iostream>
#pragma once

class Queue
{
	const int size = 100; // размер очереди по умолчанию
	double* queue; // указатель на элементы в очереди
	int bg, end; // начало и конец очереди

public:
	Queue(); // конструктор по умолчанию
	Queue(double num); // параметрический конструктор
	void push(double num); // помещение элемента в очередь
	void out(); // вывод элементов очереди
	void pop(); // извлечение элемента из очереди
	double front(); // первый элемент очереди
	double back(); // последний элемент очереди
	Queue* sort(Queue* q1, Queue* q2); // сортировка по порядку
};