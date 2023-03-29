#pragma once
class Student {
private:
	char* name;
	int age;
public:
	// constructor with params
	Student(const char* name, int age);

	void print();

	int getAge() {
		return age;
	}

	char* getName()
	{
		return name;
	}

	void setName(const char* name) {
		int len = strlen(name) + 1;
		if (len-1 >= 3 && len-1<=15)
		{
			this->name = new char[len];
			strcpy_s(this->name, len, name);
			return;
		}
		assert(!"Ad en az 3 symbol olmalidir");

	}

	void setAge(int age) {
		if (age >= 10 && age <= 89)
		{
			this->age = age;
			return;
		}

		assert(!"Yas 10-dan kicik 89 boyuk ola bilmez");

	}

	// destructor => classin objecti silinen zaman isleyen FUnksiya
	~Student();
};