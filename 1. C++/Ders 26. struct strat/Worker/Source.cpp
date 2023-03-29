#include<iostream>
#include<conio.h>
using namespace std;

size_t idWorker = 0;
size_t idCompany = 0;

#include "model.h"
#include "functions.h"



void main()
{

	Worker *w1 = createWorker();
	Worker *w2 = createWorker();

	printWorker(w1);
	printWorker(w2);

}
