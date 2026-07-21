// double queue implementation
// justtrial
#include<iostream>
using namespace std;
#define size 5
class deque
{
	int front,rear;
	int arr[size];
	public:
		deque()
		{
			front =-1;
			rear=-1;
		}
         void insertRear()
    {
        if((front==0 && rear==size-1) || (front==rear+1))
        {
            cout<<"Queue Overflow"<<endl;
            return;
        }
        else if(front==-1)
        {
            front=rear=0;
        }
        else if(rear==size-1)
        {
            rear=0;
        }
        else
        {
            rear++;
        }
        int val;
        cout<<"Enter the value to be inserted: ";
        cin>>val;
        arr[rear]=val;
    }
    void deleteRear()
    {
        if(front==-1)
        {
            cout<<"Queue Underflow"<<endl;
            return;
        }
        cout<<arr[rear]<<" deleted from queue"<<endl;
        if(front==rear)
        {
            front=rear=-1;
        }
        else if(rear==0)
        {
            rear=size-1;
        }
        else
        {
            rear--;
        }
    }
    void deleteFront(){

        if(front==-1)
        {
            cout<<"Queue Underflow"<<endl;
            return;
        }
        cout<<arr[front]<<" deleted from queue"<<endl;
        if(front==rear)
        {
            front=rear=-1;
        }
        else if(front==size-1)
        {
            front=0;
        }
        else
        {
            front++;
        }
    }
    void insertFront(){
        if(front==-1){
            rear=front=0;
        }
    }
};
int main()
{
	deque db1;
	int ch;
	cout<<"\nDouble Ended Queue Operations:"<<endl;
	cout<<"1. Input Restricted Deque"<<endl;
	cout<<"2. Input Restricted Deque"<<endl;
	cout<<"Enter your choice:"<<endl;
	cin>>ch;
	if(ch==1)
	{
		int ch1;
		char choice='y';
		do
		{
			
			cout<<"\n1. Insert from Rear"<<endl;
			cout<<"2. Delete from rear"<<endl;
			cout<<"3. Delete from Front"<<endl;
			cout<<"4. Exit"<<endl;
			cout<<"Enter your choice:"<<endl;
			cin>>ch1;
			switch(ch1)
		{
			case 1: db1.insertRear();
				break;
			case 2: db1.deleteRear();
				break;
			case 3: db1.deleteFront();
				break;
			case 4: choice='n';
				break;
			default: cout<<"Invalid Choice !"<<endl;
				break;	
		}
		}
		while(choice=='y');
	}
        // else if(ch==2)
        // {
            
        // }
        // else
        // {
        //     cout<<"Invalid Choice !"<<endl;
        // }
   
	return 0;
}