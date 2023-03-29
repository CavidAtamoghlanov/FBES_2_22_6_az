#pragma once


class CarGalery {
private:
	char* _name = nullptr;
	char* _address = nullptr;
	Car** _cars = nullptr;
	size_t _count = 0;
public:
	CarGalery() = delete;

	CarGalery(const char* name, const char* address, Car** cars, size_t len)
	{
		setName(name);
		setAddress(address);
		setCars(cars, len);
	}


	// getMethods
	const char* getName()
	{
		return _name;
	}
	const char* getAddress()
	{
		return _address;
	}
	size_t getCount()
	{
		return _count;
	}

	Car** getCars()
	{
		return _cars;
	}
	

	// set methods
	void setName(const char* name)
	{
		if (name == nullptr)
		{
			assert(!"NAme bos ola bilmez");
		}

		if (_name != nullptr)
		{
			delete[] _name;
		}

		size_t len = strlen(name) + 1;
		_name = new char[len];
		strcpy_s(_name, len, name);

	}
	void setAddress(const char* address)
	{
		if (address == nullptr)
		{
			assert(!"address bos ola bilmez");
		}

		if (_address != nullptr)
		{
			delete[] _address;
		}

		size_t len = strlen(address) + 1;
		_address = new char[len];
		strcpy_s(_address, len, address);
	}
	void setCount(size_t count)
	{
		if (count < 0) {
			assert(!"eRROR");
		}
		_count = count;
	}
	void setCars(Car** cars, size_t len)
	{
		if (cars == nullptr)
		{
			assert(!"Bos masin ola bilmez");
		}

		if (_cars != nullptr)
		{
			for (size_t i = 0; i < _count; i++)
			{
				delete _cars[i];
			}
			delete[] _cars;
		}

		_cars = new Car * [len];
		for (size_t i = 0; i < len; i++)
		{
			_cars[i] = cars[i];

		}
		_count = len;
		
	}

	void appenCar(Car* car)
	{
		Car** yeniYer = new Car * [_count+1];

		for (size_t i = 0; i < _count; i++)
		{
			yeniYer[i] = _cars[i];
		}
		
		yeniYer[_count] = car;
		_count++;

		delete[] _cars;
		_cars = yeniYer;
		
	}

	// print()
	void print()
	{
		cout << "Name: " << _name << endl;
		cout << "Address: " << _address << endl;
		cout << "----------------------" << endl;
		cout << "Cars" << endl;
		
		for (size_t i = 0; i < _count; i++)
		{
			_cars[i]->print();
			cout << endl;
		}

	 }

	// --------------------
	/*
	void clear();
	void appendCar(Car* car);
	void removeCar(Car* car);
	void deleteCarById(size_t id);
	*/

	// destructor
	~CarGalery()
	{
		delete[] _name;
		delete[] _address;
		for (size_t i = 0; i < _count; i++)
		{
			delete _cars[i];

		}
		delete[] _cars;

	}


};

// -------------------------------------------------------------
// -------------------------------------------------------------
// out of class