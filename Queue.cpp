#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Enqueue operation
void enqueue(int x) {
    if (rear == MAX - 1)
        cout << "Queue Overflow\n";
    else {
        if (front == -1)
            front = 0;
        queue[++rear] = x;
        cout << x << " inserted into queue\n";
    }
}

// Dequeue operation
void dequeue() {
    if (front == -1 || front > rear)
        cout << "Queue Underflow\n";
    else {
        cout << "Deleted element: " << queue[front++] << endl;
    }
}

// Display queue
void display() {
    if (front == -1 || front > rear)
        cout << "Queue is empty\n";
    else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();

    return 0;
}
