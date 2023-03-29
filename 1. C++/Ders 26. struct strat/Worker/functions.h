#pragma once


Worker* createWorker()
{
	Worker* newWorker = new Worker;
	newWorker->id = idWorker++;
	newWorker->name = new char[] {"Kamal"};
	newWorker->surname = new char[] {"Rehimov"};
	newWorker->age = 13;
	newWorker->address = new char[] {"Suraxani"};
	newWorker->phone = new char[] {"070-233-99-93"};
	newWorker->salary = 951.53f;


	return newWorker;
}

void printWorker(Worker* worker)
{
	cout << "\n\tWorker Info\n";

	cout << "Id: " <<worker->id << endl;
	cout << "Name: " <<worker->name << endl;
	cout << "Surname: " <<worker->surname << endl;
	cout << "Address: " <<worker->address << endl;
	cout << "Phone: " <<worker->phone << endl;
	cout << "Age: " <<worker->age << endl;
	cout << "Salary: " <<worker->salary << endl;
}