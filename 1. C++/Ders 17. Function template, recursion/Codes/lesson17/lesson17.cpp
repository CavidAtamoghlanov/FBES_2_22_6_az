#include <iostream>

using namespace std;

#include "fPrototypes.h"
#include "fBodies.h"


int main()
{
	srand(time(0));

	const int n = 15;
	int arr[n];

	initArray(arr, n, 10, 99);
	printArray(arr, n);
	
	int maxElement = getMaxElementInArray(arr, n);
	cout << "Max element: " << getMaxElementInArray(arr, n) << endl;
}