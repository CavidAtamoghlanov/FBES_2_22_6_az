#pragma once

// OUT OF CLASS

Student::Student(const char* name, int age) {
	setName(name);
	setAge(age);
}

void Student::print() {
	cout << (name != nullptr ? name : "NULL") << endl;
	cout << age << endl;
}

Student::~Student() {
	cout << "des" << endl;
	delete name;
	name = nullptr;
}
