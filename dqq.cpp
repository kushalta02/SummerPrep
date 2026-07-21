// Double ended queue implementation
#include<iostream>
#define size 5
using namespace std;

class deque
{
    int arr[size];
    int front, rear;

public:

    deque()
    {
        front = -1;
        rear = -1;
    }

    // Insert at Front
    void insertFront()
    {
        int val;
        cout<<"Enter value: ";
        cin>>val;

        if(front==0)
        {
            cout<<"Insertion at Front is not possible."<<endl;
            return;
        }

        if(front==-1)
        {
            front=rear=0;
        }
        else
        {
            front--;
        }

        arr[front]=val;

        cout<<val<<" inserted at Front."<<endl;
    }

    // Insert at Rear
    void insertRear()
    {
        int val;
        cout<<"Enter value: ";
        cin>>val;

        if(rear==size-1)
        {
            cout<<"Insertion at Rear is not possible."<<endl;
            return;
        }

        if(front==-1)
        {
            front=rear=0;
        }
        else
        {
            rear++;
        }

        arr[rear]=val;

        cout<<val<<" inserted at Rear."<<endl;
    }

    // Delete Front
    void deleteFront()
    {
        if(front==-1)
        {
            cout<<"Deque Underflow..."<<endl;
            return;
        }

        cout<<arr[front]<<" deleted from Front."<<endl;

        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front++;
        }
    }

    // Delete Rear
    void deleteRear()
    {
        if(front==-1)
        {
            cout<<"Deque Underflow..."<<endl;
            return;
        }

        cout<<arr[rear]<<" deleted from Rear."<<endl;

        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            rear--;
        }
    }

    // Display
    void display()
    {
        if(front==-1)
        {
            cout<<"Deque is Empty..."<<endl;
            return;
        }

        cout<<"Deque Elements : ";

        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i]<<" ";
        }

        cout<<endl;
    }
};

int main()
{
    deque d1;

    int type;

    cout<<"Select Deque Type"<<endl;
    cout<<"1. Input Restricted Deque"<<endl;
    cout<<"2. Output Restricted Deque"<<endl;
    cout<<"Enter your choice : ";
    cin>>type;

    int ch;
    char choice='y';

    // ---------------- Input Restricted ----------------

    if(type==1)
    {
        do
        {
            cout<<"\nInput Restricted Deque"<<endl;
            cout<<"1. Insert Rear"<<endl;
            cout<<"2. Delete Front"<<endl;
            cout<<"3. Delete Rear"<<endl;
            cout<<"4. Display"<<endl;
            cout<<"5. Exit"<<endl;

            cout<<"Enter choice : ";
            cin>>ch;

            switch(ch)
            {
                case 1:
                    d1.insertRear();
                    break;

                case 2:
                    d1.deleteFront();
                    break;

                case 3:
                    d1.deleteRear();
                    break;

                case 4:
                    d1.display();
                    break;

                case 5:
                    choice='n';
                    break;

                default:
                    cout<<"Invalid Choice"<<endl;
            }

        }while(choice=='y');
    }

    // ---------------- Output Restricted ----------------

    else if(type==2)
    {
        do
        {
            cout<<"\nOutput Restricted Deque"<<endl;
            cout<<"1. Insert Front"<<endl;
            cout<<"2. Insert Rear"<<endl;
            cout<<"3. Delete Front"<<endl;
            cout<<"4. Display"<<endl;
            cout<<"5. Exit"<<endl;

            cout<<"Enter choice : ";
            cin>>ch;

            switch(ch)
            {
                case 1:
                    d1.insertFront();
                    break;

                case 2:
                    d1.insertRear();
                    break;

                case 3:
                    d1.deleteFront();
                    break;

                case 4:
                    d1.display();
                    break;

                case 5:
                    choice='n';
                    break;

                default:
                    cout<<"Invalid Choice"<<endl;
            }

        }while(choice=='y');
    }

    else
    {
        cout<<"Invalid Deque Type..."<<endl;
    }

    return 0;
}