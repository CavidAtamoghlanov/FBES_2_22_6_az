#pragma once



// const method

// operator overloading   ()


class Person
{
public:
	Person(string name, string surname, short int age, string work) {

	}

};


class Student
{
	string _name;
	string _surname;
	short int _age;
public:
	Student(string name, string surname, short int age)
	{
		setName(name);
		setSurname(surname);
		setAge(age);
	}

	void setName(string name)
	{
		_name = name;
	}

	void setSurname(string surname)
	{
		_surname = surname;
	}

	void setAge(short int age)
	{
		_age = age;
	}

	void print() const
	{
		cout << "======== Info ============" << endl;
		cout << "Name: " << this->_name << endl
			<< "Surname: " << this->_surname << endl
			<< "Age: " << this->_age << endl;
	}


	// const- method  => daxilinde classin hecbir fieldi deishdirile bilmez
	// const-and object ancaq const  olan field ve methodlari ishlede bilir
	short getAge() const
	{
		return _age;
	}



	// explicit typecast overloading

	operator int() {

		return _age;
	}

	operator bool()
	{
		return _age > 10 ? true : false;
	}

	operator Person()
	{
		return Person(_name, _surname, _age, "Fehle");
	}

	
	// cout  << overloading
	friend ostream& operator<<(ostream& print, const Student& other)
	{
		print << "======== Info ============" << endl;
		print << "Name: " << other._name << endl
			<< "Surname: " << other._surname << endl
			<< "Age: " << other._age << endl;

		return print;
	}

	friend  istream& operator>>(istream& input, Student& other)
	{
		
		cout << "Enter name: ";
		char* text = new char[5];
		input.getline(text, 5);
		cout << strlen(text) << endl;

		other.setName(text);


		cout << "Enter surname: ";
		input.getline(text, 50);
		other.setSurname(text);


		cout << "Enter age: ";
		int age;
		input >> age;
		other._age = age;


		return input;

	}

};