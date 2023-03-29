#pragma once


/*
	Friend classes
	1. friend Function
	2. friend method
	3. friend class
*/



// friend function
//class someClass {
//    char* _name = nullptr;
//    int _age = 0;
//
//    friend void friendFunction();
//    friend void friendFunction(someClass& sp);
//
//    void setAge(int age)
//    {
//        _age = age;
//    }
//public:
//    char* surname = nullptr;
//
//    someClass(const char* name, const char* surnamep, int age)
//    {
//        setName(name);
//        setSurname(surnamep);
//        setAge(age);
//    }
//
//    void setName(const char* name)
//    {
//        int len = strlen(name) + 1;
//        _name = new char[len];
//        strcpy_s(_name, len, name);
//    }
//    void setSurname(const char* surnamep)
//    {
//        int len = strlen(surnamep) + 1;
//        surname = new char[len];
//        strcpy_s(surname, len, surnamep);
//    }
//
//
//
//};
//
//
//void friendFunction()
//{
//    someClass s1("Kamal", "Kamalov", 11);
//    cout << s1._name << endl;
//}
//
//void friendFunction(someClass& sp)
//{
//    cout << sp.surname << endl;
//}
// ------------------------------------------------------------------------
// ------------------------------------------------------------------------
// ------------------------------------------------------------------------

// friend method  => mutleq out of class yazilmalidir


//class A {
//    int _a=1;
//    int _b=2;
//public:
//    int c=3;
//
//    int getAdata();
//    int getAdata(int qq);
//};
//
//
//int A::getAdata()
//{
//    B object;
//    int a = object._d;
//    return a;
//}
//int A::getAdata(int qq)
//{
//    B object;
//    int a = object._d;
//    return a;
//}
//
//class B {
//    int _d=4;
//    int _e=5;
//    friend int A::getAdata();
//    friend int A::getAdata(int qq);
//public:
//    int f=6;
//
//};


// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------

// friend class =>

class qaqa
{
	friend class brat;
	int _d = 4;
	int _e = 5;
public:
	int f = 6;
};

class brat
{
	qaqa qa;
	int _a = 1;
	int _b = 2;
public:
	int c = 3;

	void getData()
	{
		cout << qa._d << endl;
		qa._d = 18;
	}
};


