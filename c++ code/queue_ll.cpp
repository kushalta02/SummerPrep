// queue implementation using linked list
#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node*next;
        node(int val){
            data=val;
            next=NULL;
        }
};
class queue{
    // private:
    public:
        node*front;
        node*rear;
        queue(){
            front=NULL;
            rear=NULL;
        }
        void ops()
		{
			int ch;
			char choice2='y';
			do
			{
				cout<<"\n1. Enqueue"<<endl;
				cout<<"\n2. Dequeue"<<endl;
				cout<<"\n3. Display"<<endl;
				cout<<"\n4. Exit."<<endl;
				cout<<"Enter your choice.";
				cin>>ch;
				switch(ch)
				{
					case 1: 
                        int val;
                        cout<<"Enter the value to be inserted: ";
                        cin>>val;
                        enqueue(val);
					    break;
					case 2: dequeue();
					        break;
					case 3: display();
					        break;        
					case 4: choice2='n';
					        break;
					default: cout<<"Invalid Choice!!";
					         break;
					         
				}
			}
			while(choice2=='y');
		}
        void enqueue(int x){
            node * new_node= new node(x);
            if(rear==NULL){
                front=rear=new_node;
                return;
            }
            else{
                rear->next=new_node;
                rear=new_node;
            }
            cout<<x<<" is inserted in the queue"<<endl;
        }
        void dequeue(){
            if(front==NULL){
                cout<<"Queue Underflow"<<endl;
                return;
            }
            node*temp=front;
            cout<<temp->data<<" is removed from the queue"<<endl;
            front=front->next;
            if(front==NULL){
                rear=NULL;
            }
            delete temp;
        }
        void display(){
            if(front==NULL){
                cout<<"Queue Underflow"<<endl;
                return;
            }
            node*temp=front;
            cout<<"Queue elements are: ";
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }

};
int main(){
    queue q;
    int ch;
    char choice='y';
    system("cls");
    do
    {
        cout<<"\n Queue Project:"<<endl;
        cout<<"\n1. Operations."<<endl;
        cout<<"\n2. Exit."<<endl;
        cout<<"Enter your choice.";
        cin>>ch;
        switch(ch)
        {
            case 1:  q.ops();
                     break;
            case 2: choice = 'n';
                    break;
            default: cout<<"Invalid Choice!!"<<endl;
                     break;
        }
        
    }
    while(choice=='y');
}