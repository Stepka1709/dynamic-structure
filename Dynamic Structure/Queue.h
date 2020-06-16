#include <iostream>
#pragma once

class Queue
{
	const int size = 100; // ������ ������� �� ���������
	double* queue; // ��������� �� �������� � �������
	int bg, end; // ������ � ����� �������

public:
	Queue(); // ����������� �� ���������
	Queue(double num); // ��������������� �����������
	void push(double num); // ��������� �������� � �������
	void out(); // ����� ��������� �������
	void pop(); // ���������� �������� �� �������
	double front(); // ������ ������� �������
	double back(); // ��������� ������� �������
	Queue* sort(Queue* q1, Queue* q2); // ���������� �� �������
};