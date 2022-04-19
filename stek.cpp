#include <iostream>

using namespace std;

struct elem
{
	int key;
	elem* next;
}*start = NULL;

void push(int n)
{
	elem* p;
	p = start;
	start = new elem;
	start->key = n;
	start->next = p;
}

int pop(int& n)
{
	elem* p;
	if (start)
	{
		p = start;
		n = start->key;
		start = start->next;
		delete p;
		return 1;
	}
	else {
		return 0;
	}
}

int main()
{
	cout << "Input integers:\n";
	int number, counter = 0;
	while (cin >> number)
	{
		push(number);
		counter++;
	}
	cout << "The numbers are: \t";
	while (pop(number))
	{
		cout << number << "\t";
	}
	cout << "\nThe counter is " << counter;
}



