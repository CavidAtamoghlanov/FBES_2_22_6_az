#pragma once

template<typename T, const int sizee = 10>
class Stack
{
	T _arr[sizee];
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

	void push(T newItem)
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

	T peek()
	{
		if (isEmpty())
		{
			assert(!"Stack is empty");
		}
		return _arr[_top];
	}

	T* getData()
	{
		return _arr;
	}




};

int main_2()
{

	Stack<double> v1;

	v1.push(11.30);
	v1.pop();
	v1.push(12.56);

}