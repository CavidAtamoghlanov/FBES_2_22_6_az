//#pragma once
//
//
//template<typename T, size_t size>
//class Array
//{
//	T* _data;
//public:
//	Array()
//	{
//		_data = new T[size];
//	};
//
//	const T& at(size_t index) const
//	{
//		if (index < 0 || index >= size)
//		{
//			throw out_of_range("Index-den kenara cixdiniz");
//		}
//
//		return _data[index];
//	};
//
//	T& operator[](size_t index)
//	{
//		if (index < 0 || index >= size)
//		{
//			throw out_of_range("Index-den kenara cixdiniz");
//		}
//
//		return _data[index];
//	};
//
//	T* data() { return _data };
//
//
//	void fill(const T& value)
//	{
//		for (size_t i = 0; i < size; i++)
//		{
//			_data[i] = value;
//		}
//	}
//
//	
//	class Iterator {
//		T* _ptr;
//	public:
//		Iterator(T* value)
//		{
//			_ptr = value;
//		}
//
//		Iterator& operator++()
//		{
//			_ptr++;
//			return *this;
//		}
//
//		Iterator& operator++(int)
//		{
//			_ptr++;
//			return *this;
//		}
//
//		T& operator*()
//		{
//			return *_ptr;
//		}
//
//
//		bool operator!=(const Iterator& other)
//		{
//			return this->_ptr != other._ptr;
//		}
//
//
//
//
//	};
//
//
//	Iterator begin()
//	{
//		return Iterator(_data);
//	}
//
//	Iterator end()
//	{
//		return Iterator(_data + size);
//	}
//
//
//
//};

template <typename T, size_t size>
class Array : public array<T, size>
{
public:
	void myfoo()
	{

	 }
};