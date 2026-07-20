#include <iostream>
using namespace std;
class node{
    public:
        int data;
        node *next;
        node *pre;
        node()
        {
            data=0;
            next=NULL;
            pre=NULL;
        }
        node(int val)
        {
            data=val;
            next=NULL;
            pre=NULL;
        }
};
class dlinked{
    node*start=NULL;
    public:
		void insert()
		{
			int ch;
			char choice2='y';
			do
			{
				cout<<"\n1. Insert at Begin."<<endl;
				cout<<"\n2. Insert at End."<<endl;
				cout<<"\n3. Insert at Position."<<endl;
				cout<<"\n4. Exit."<<endl;
				cout<<"Enter your choice.";
				cin>>ch;
				switch(ch)
				{
					case 1: insert_bg();
					        break;
					case 2: insert_end();
					        break;
					case 3: insert_at_pos();
					        break;        
					case 4: choice2='n';
					        break;
					default: cout<<"Invalid Choice!!";
					         break;
					         
				}
			}
			while(choice2=='y');
		}
    void insert_bg(){
        int val;
        cout<<"enter number:";
        cin>>val;
        node *ptr=new node(val);
        if(start==NULL){
            start=ptr;
            cout<<"Node Inserted!!"<<endl;
        }
        ptr->next=start;
        start->pre=ptr;
        start=ptr;
        cout<<"Node inserted at beginning!!"<<endl;


        
    }
    void insert_end(){
        int val;
        cout<<"enter number :";
        cin>>val;
        node *ptr=new node(val);
        if(start==NULL){
            start=ptr;
            cout<<"Node Inserted!!"<<endl;
        }
        ptr->next=start;
        start->pre=ptr;
        start=ptr;
        cout<<"Node inserted at end!!"<<endl;
        if(start!=NULL){
            node *temp=start;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->pre=temp;
            cout<<"Node inserted at end!!"<<endl;
        }
    }
    void insert_at_pos(){
        
        return;
    }
    void display(){
        node*temp=start;
        if (start==NULL){
            cout<<"List is Empty!!"<<endl;
            return;
        }
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
	dlinked l1;
	int ch;
	char choice='y';
	system("cls");
	do
	{
		cout<<"\n Linked list Project:"<<endl;
		cout<<"\n1. Insert."<<endl;
		cout<<"\n2. Display."<<endl;
		cout<<"\n3. Deletion."<<endl;
		cout<<"\n4. Exit."<<endl;
		cout<<"Enter your choice.";
		cin>>ch;
		switch(ch)
		{
			case 1:  l1.insert();
			         break;
			case 2: l1.display();
			        break;
			// case 3: l1.deletion();
			//         break;
			case 4: choice = 'n';
			        break;
			default: cout<<"Invalid Choice!!"<<endl;
			         break;
		}
		
	}
	while(choice=='y');
	return 0;
}