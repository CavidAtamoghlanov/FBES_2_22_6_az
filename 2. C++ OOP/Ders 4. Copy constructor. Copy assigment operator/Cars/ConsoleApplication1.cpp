#include <iostream>
#include <cassert>
using namespace std;

#include"CarClass.h"
#include"CarGalery.h"
#include"CarFunctions.h"

int main()
{
	//Car c1("Kia", "Rio", "Sari");
	//Car c2("BMW", "X7", "ORANGE");

	//Car* c3 = new Car("Mercedes", "W210", "Black");

	//Car arr[3]{
	//	Car("Kia", "Rio", "Sari"),
	//	Car("Kia", "Rio", "Sari"),
	//	Car("Kia", "Rio", "Sari"),
	//};

	Car** cars = new Car * [3]{
		new Car("Kia", "Rio", "Sari"),
		new Car("Mercedes", "W210", "Black"),
		new Car("Kia", "Rio", "Sari"),
	};
	
	

	CarGalery g1("333 Cars", "20 Yanvar", cars, 3);
	delete[] cars;

	g1.print();

	Car* y = new Car("Kia1", "Rio1", "Sari1");

	g1.appenCar(y);
	cout << "-------------------------" << endl;
	g1.print();

	
}