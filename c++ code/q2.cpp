
// Circular Queue Implementation
#include<iostream>
#define size 5
using namespace std;

class queue
{
    int arr[size];
    int front, rear;

public:

    queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue()
    {
        int val;
        cout << "Enter value: ";
        cin >> val;

        // Queue Overflow
        if((front == 0 && rear == size - 1) ||
           (rear + 1) % size == front)
        {
            cout << "Queue Overflow..." << endl;
            return;
        }

        // First Element
        if(front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % size;
        }

        arr[rear] = val;

        cout << val << " inserted into Queue." << endl;
    }

    void dequeue()
    {
        if(front == -1)
        {
            cout << "Queue Underflow..." << endl;
            return;
        }

        cout << arr[front] << " deleted from Queue." << endl;

        // Last element deleted
        if(front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
    }

    void display()
    {
        if(front == -1)
        {
            cout << "Queue is Empty..." << endl;
            return;
        }

        cout << "Queue Elements: ";

        int i = front;

        while(true)
        {
            cout << arr[i] << " ";

            if(i == rear)
                break;

            i = (i + 1) % size;
        }

        cout << endl;
    }
};

int main()
{
    queue q1;

    int ch;
    char choice = 'y';

    do
    {
        cout << "\nCircular Queue Operations" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                q1.enqueue();
                break;

            case 2:
                q1.dequeue();
                break;

            case 3:
                q1.display();
                break;

            case 4:
                choice = 'n';
                break;

            default:
                cout << "Invalid Choice..." << endl;
        }

    }while(choice == 'y');

    return 0;
}
