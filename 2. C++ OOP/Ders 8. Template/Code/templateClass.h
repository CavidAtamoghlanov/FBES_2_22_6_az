#pragma once




class Car
{
	

public:
	char* _model = nullptr;
	char* _marka = nullptr;
	size_t _year;
	Car()
	{
		setModel("None");
		setMarka("None");
		setYear(1996);
	}

	Car(const char* model, const char* marka, size_t year)
	{
		setModel(model);
		setMarka(marka);
		setYear(year);
	}

	void setModel(const char* model)
	{
		if (_model != nullptr)
		{
			delete[] _model;
		}
		size_t len = strlen(model) + 1;
		_model = new char[len];
		strcpy_s(_model, len, model);
	}

	void setMarka(const char* marka)
	{
		if (_marka != nullptr)
		{
			delete[] _marka;
		}
		size_t len = strlen(marka) + 1;

		_marka = new char[len];
		strcpy_s(_marka, len, marka);
	}

	void setYear(size_t year)
	{
		if (year > 1995 && year < 2022)
		{
			_year = year;
			return;
		}
		throw "Error";
	}

	
	friend ostream& operator<<(ostream& output, const Car& other)
	{
		output << other._marka;
		return output;
	}

	Car(const Car& other)
	{
		cout << "Copy constructor" << endl;
		this->setMarka(other._marka);
		this->setModel(other._model);
		this->setYear(other._year);
	}


	Car& operator=(const Car& other)
	{
		this->setMarka(other._marka);
		this->setModel(other._model);
		this->setYear(other._year);

		return *this;
	}
	~Car()
	{
		delete[] _model;
		delete[] _marka;
	}



};






template<typename Type>
class List
{
	Type* _array;
	size_t _size;
	size_t _capacity;
public:
	List()
	{
		_capacity = 5;
		_size = 0;
		_array = new Type[_capacity]{};
	}
	List(size_t capacity)
	{
		setCapacity(capacity);
		
	}

	void setCapacity(size_t capacity);

	Type* getData()
	{
		return _array;
	}

	void append(Type data)
	{
		if (_size == _capacity)
		{
			_capacity += 5;
			Type* temp = new Type[_capacity]{};

			for (size_t i = 0; i < _size; i++)
			{
				temp[i] = _array[i];
			}
			temp[_size] = data;
			_size++;
			_array = temp;
			return;
		}
		_array[_size++] = data;

	}

	void print() const
	{
		cout << "[";
		for (size_t i = 0; i < _size; i++)
		{
			cout << _array[i] << (i == _size - 1 ? "" : ", ");
		}
		cout << "]" << endl;
	}

};
template<typename T>
void List<T>::setCapacity(size_t capacity)
{
	if (capacity > _capacity)
	{
		_capacity = capacity;
		_array = new Type[_capacity]{};
		_size = 0;
		return;
	}
	throw "Please Enter Min 5 capacity";
}









void templateClassMain()
{

	List<Car> l1;

	Car c1("X5", "BMW", 2015);

	l1.append(c1);
	l1.append(c1);
	l1.append(c1);
	l1.append(c1);
	l1.append(c1);
	l1.append(c1);
	l1.append(c1);
	l1.append(c1);
	l1.append(c1);

	cout << c1._marka << endl;
	cout << c1._model << endl;
	cout << c1._year << endl;

	
	l1.print();


	


}