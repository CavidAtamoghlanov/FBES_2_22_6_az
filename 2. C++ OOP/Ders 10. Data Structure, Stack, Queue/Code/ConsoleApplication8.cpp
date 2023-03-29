#include <iostream>
#include<cassert>
#include<stack>


using namespace std;

#include"stack 1.h"
#define SIZE 10
class Queue {
private:
    int items[SIZE], front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        if (front == 0 && rear == SIZE - 1) {
            return true;
        }
        return false;
    }

    bool isEmpty() {
        if (front == -1)
            return true;
        else
            return false;
    }

    void enQueue(int element) {
        if (isFull()) {
            cout << "Queue is full";
        }
        else {
            if (front == -1) front = 0;
            rear++;
            items[rear] = element;
            cout << endl
                << "Inserted " << element << endl;
        }
    }

    int deQueue() {
        int element;
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return (-1);
        }
        else {
            element = items[front];
            if (front >= rear) {
                front = -1;
                rear = -1;
            } /* Q has only one element, so we reset the queue after deleting it. */
            else {
                front++;
            }
            cout << endl
                << "Deleted -> " << element << endl;
            return (element);
        }
    }

    void display() {
        /* Function to display elements of Queue */
        int i;
        if (isEmpty()) {
            cout << endl
                << "Empty Queue" << endl;
        }
        else {
            cout << endl
                << "Front index-> " << front;
            cout << endl
                << "Items -> ";
            for (i = front; i <= rear; i++)
                cout << items[i] << "  ";
            cout << endl
                << "Rear index-> " << rear << endl;
        }
    }
};

int main()
{


    Queue q1;
    q1.deQueue();
    q1.enQueue(10);
    q1.enQueue(11);
    q1.enQueue(12);
    q1.enQueue(13);

    

    q1.enQueue(14);
    q1.enQueue(14);
    q1.enQueue(15);
    q1.display();



}

