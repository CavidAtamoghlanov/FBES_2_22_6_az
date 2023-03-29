#pragma once

size_t Car::_staticId = 0;

// Constructors
Car::Car() {
	_id = ++_staticId;
}

Car::Car(const char* make, const char* model, const char* color):Car() {
	setMake(make);
	setModel(model);
	setColor(color);
}

size_t Car::getStaticId()
{
	return _staticId;
}
size_t Car::getId() { return _id; }
const char* Car::getMake() { return _make; }
const char* Car::getModel() {return _model;}
const char* Car::getColor() {return _color;}





void Car::setMake(const char* make) {
	if (make == nullptr) assert(!"Make == null");
	if (this->_make != nullptr) delete[] this->_make;
	
	short int len = strlen(make) + 1;
	this->_make = new char[len];
	strcpy_s(this->_make, len, make);


}

void Car::setModel(const char* model) {
	if (model == nullptr) assert(!"Model == null");
	if (this->_model != nullptr) delete[] this->_model;

	short int len = strlen(model) + 1;
	this->_model = new char[len];
	strcpy_s(this->_model, len, model);
}

void Car::setColor(const char* color) {
	if (color == nullptr) assert(!"Color == null");
	if (this->_color != nullptr) delete[] this->_color;

	short int len = strlen(color) + 1;
	this->_color = new char[len];
	strcpy_s(this->_color, len, color);
}