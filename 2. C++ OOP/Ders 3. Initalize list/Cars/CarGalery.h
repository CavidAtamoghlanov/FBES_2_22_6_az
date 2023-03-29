#pragma once


class CarGalery {
private:
	char* _name = nullptr;
	char* _address = nullptr;
	Car** _cars = nullptr;
	size_t _count = 0;
public:
	CarGalery() = delete;
	CarGalery(const char* name);
	CarGalery(const char* name, const char* address);
	CarGalery(const char* name, const char* address, Car**cars);
	

	// getMethods
	const char* getName();
	const char* getAddress();
	size_t getCount();
	Car** getCars();
	

	// set methods
	void setName(const char* name);
	void setAddress(const char* address);
	void setCount(size_t count);
	void setCars(Car** cars);

	// print()
	void print();

	// --------------------
	void clear();
	void appendCar(Car* car);
	void removeCar(Car* car);
	void deleteCarById(size_t id);

	// destructor
	~CarGalery();


};

// -------------------------------------------------------------
// -------------------------------------------------------------
// out of class