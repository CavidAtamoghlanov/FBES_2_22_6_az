#pragma once

typedef unsigned short int ushort;
class Car {
private:
	static size_t _staticId;
	size_t _id = 0;
	char* _make = nullptr;
	char* _model = nullptr;
	char* _color = nullptr;

public:

	// Constructors
	Car();
	Car(const char* make, const char* model, const char* color);

	// get methods
	static size_t getStaticId();
	size_t getId();
	const char* getMake();
	const char* getModel();
	const char* getColor();


	// set methods
	void setMake(const char* make);
	void setModel(const char* model);
	void setColor(const char* color);


	// print
	void print()
	{
		cout << "Make: " << _make << endl;
		cout << "Model: " << _model << endl;
		cout << "Color: " << _color << endl;
	}

	// Destructor
	~Car()
	{
		delete[] _make;
		delete[] _model;
		delete[] _color;
	}

};