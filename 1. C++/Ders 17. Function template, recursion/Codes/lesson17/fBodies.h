#pragma once

template<typename T>
void printArray(T arr[], int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}


template<typename T>
void initArray(T arr[], int n, int min, int max) {
	for (size_t i = 0; i < n; i++)
		arr[i] = min + rand() % (max - min + 1);
}


template<typename T>
T getMaxElementInArray(T arr[], int n) {
	T maxElement = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > maxElement) 
			maxElement = arr[i];
	}

	return maxElement;
}