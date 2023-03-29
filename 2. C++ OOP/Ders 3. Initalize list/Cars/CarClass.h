#pragma once

typedef unsigned short int ushort;
class Car {
private:
	static size_t _staticId;
	size_t _id = 0;
	char* _make = nullptr;
	char* _model = nullptr;
	char* _color = nullptr;
	ushort _year = 0;
	double _engine = 0.0;
public:

	// Constructors
	Car();
	Car(const char* make, const char* model, const char* color);
	Car(const char* make, const char* model, const char* color, ushort year, double engine);

	// get methods
	static size_t getStaticId();
	size_t getId();
	const char* getMake();
	const char* getModel();
	const char* getColor();
	ushort getYear();
	double getEngine();

	// set methods
	void setMake(const char* make);
	void setModel(const char* model);
	void setColor(const char* color);
	void setYear(ushort year);
	void setEngine(double engine);

	// print
	void print();

	// Destructor
	~Car();

};