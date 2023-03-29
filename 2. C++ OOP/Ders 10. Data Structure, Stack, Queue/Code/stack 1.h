#pragma once
#define _capacity 10
class Stack
{
	int _arr[_capacity];
	int _top; // sonuncu elementin indeksini gosterir
	size_t _size; // arraydeki elementlerin sayi
public:
	Stack()
	{
		_top = -1;
		_size = 0;
	}

	bool isFull() { return _size == _capacity; }

	bool isEmpty() { return _top == -1; }

	void push(int newItem)
	{
		if (isFull())
		{
			assert(!"Stack is full");
		}
		_top++;
		_size++;
		_arr[_top] = newItem;
	}

	void pop()
	{
		if (isEmpty())
		{
			assert(!"Stack is empty");
		}
		_top--;
		_size--;
	}

	int peek()
	{
		if (isEmpty())
		{
			assert(!"Stack is empty");
		}
		return _arr[_top];
	}

	int* getData()
	{
		return _arr;
	}




};



void mainStack_1()
{
	/*Stack v1;
	v1.push(10);
	v1.push(11);
	v1.push(12);

	v1.pop();

	cout << (v1.peek()) << endl;*/
}