#include<iostream>
#include <cassert> 
#include<string>
using namespace std;

template<typename T>
class Vector {
private:
	T* _array = nullptr;
	size_t _size = 0;
	size_t _capacity = 15;
public:
	Vector()
	{
		this->_array = new T[_capacity]{};
	}
	Vector(size_t capacity)
	{
		if (capacity > this->_capacity)this->_capacity = capacity;
	}
	T* getData() const { return _array; }
	size_t size() const { return _size; }
	size_t capacity() const { return _capacity; }
	void print()
	{
		if (_size == NULL) assert(!"Null error");
		for (size_t i = 0; i < _size; i++)
		{
			cout << this->_array[i];
		}
	};
	T& operator[](size_t index)
	{
		if (_array[index] == NULL)assert(!"error");
		return _array[index];
	}
	T& operator()(size_t index)
	{
		if (_array[index] == NULL)assert(!"error");
		this->_size++;
		return _array[index];
	}
	Vector& push_back(const T value)
	{
		int len = _size + 1;
		if (len > _capacity)
		{
			this->_capacity += 16;
			T* newarr = new T[_capacity]{};
			for (size_t i = 0; i < _size; i++)
			{
				newarr[i] = _array[i];
			}
			delete[]_array;
			_array = newarr;
		}
		this->_array[_size] = value;
		this->_size++;
		return *this;
	}
	void operator++(int a)
	{
		for (size_t i = 0; i < _size; i++)
		{
			++_array[i];
		}
	}
	Vector& push_front(const T value)
	{
		int len = _size + 1;
		if (len > _capacity)
		{
			this->_capacity += 16;
		}
		T* newarr = new T[_capacity]{};
		for (size_t i = 0; i < _size; i++)
		{
			newarr[1 + i] = _array[i];
		}
		delete[]_array;
		_array = newarr;
		this->_array[0] = value;
		this->_size++;
		return *this;
	}
	Vector& pop_back()
	{
		this->_array[_size - 1] = NULL;
		_size--;
		return *this;
	}
	Vector& pop_front()
	{
		T* newarr = new T[_capacity]{};
		for (size_t i = 0; i < _size - 1; i++)
		{
			newarr[i] = this->_array[1 + i];
		}
		delete[]this->_array;
		_array = newarr;
		_size--;
		return *this;
	}
	void delete_by_index(const size_t index)
	{
		int a = 0;
		T* newarr = new T[_capacity]{};
		for (size_t i = 0; i < _size - 1; i++)
		{
			if (i != index)
			{
				newarr[i] = this->_array[a + i];
			}
			else
			{
				a++;
				newarr[i] = this->_array[i + a];
			}
		}
		delete[]this->_array;
		_array = newarr;
		_size--;
	}
	void insert_by_index(const size_t index)
	{
		if (index >= _size)assert(!"unlocated element");
		cout << this->_array[index] << endl;
	}
	size_t find(const T element)
	{
		for (size_t i = 0; i < _size; i++)
		{
			if (this->_array[i] == element) return i;
		}
	}
	size_t rfind(const T element)
	{
		for (size_t i = 0; i < _size; i++)
		{
			if (this->_array[_size - 1 - i] == element) return (_size - 1 - i);
		}
	}
	void sort(bool reverse)
	{
		if (reverse)
		{
			for (size_t i = 0; i < _size; i++)
			{
				cout << _array[_size - 1 - i] << endl;
			}
		}
	}
};
int main()
{
	Vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(5);
	cout << "before" << endl;
	arr.print();
	///*cout << arr[1];
	//cout << arr(0);*/
	//cout << endl;
	//arr+2;
	//arr.pop_back();
	//arr.pop_back();
	//arr.pop_front();
	//arr.pop_front();
	//arr.delete_by_index(2);
	//arr.delete_by_index(3);
	//arr.delete_by_index(1);
	//arr.insert_by_index(1);
	//cout << "index: " << arr.find(3);
	//cout << "index: " << arr.rfind(5);
	//arr.sort(true);
	cout << "after" << endl;
	arr.print();
	//cout << arr.getData()[2];
}