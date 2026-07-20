#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node()
		{
			data=0;
			next=NULL;
		}
		node(int val)
		{
			data=val;
			next=NULL;
		}
};
class linkedlist{
	node *start = NULL;
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
					case 1: at_begin();
					        break;
					case 2: at_end();
					        break;
					case 3: at_pos();
					        break;        
					case 4: choice2='n';
					        break;
					default: cout<<"Invalid Choice!!";
					         break;
					         
				}
			}
			while(choice2=='y');
		}
		void display()
		{
			node *temp = start;
				if(start==NULL)
				{
					cout<<"List is Empty!!"<<endl;
					return;
				}
			cout<<"List."<<endl;
			while(temp!=NULL)
			{
				cout<<temp->data<<"->";
				temp=temp->next;
				
			}
		}
		void at_begin()
		{
			int num;
			cout<<"Enter Number:";
			cin>>num;
			node *ptr = new node(num); 
			if(start==NULL)
			{
				start=ptr;
			}
			else
			{
				ptr->next=start;
				start=ptr;
				cout<<"Node Inserted!!"<<endl;
			}
		}
		void at_end()
		{
			int val;
			cout<<"enter number:";
			cin>>val;
			node *ptr = new node(val);
			node *temp = start;
			if(start==NULL)
			{
				start=ptr;
			}
		    else
		    {
		     	while(temp->next!=NULL)
		     	{
				 temp=temp->next;
			   }
		    	temp->next=ptr;
			    cout<<"Node Inserted At End"<<endl;
			}
		}
		void at_pos()
		{
			int val, pos;
			cout<<"Enter Value:";
			cin>>val;
			cout<<"Enter position where u want to Insert:";
			cin>>pos;
			node *ptr = new node(val);
			node *temp=start;
			if(pos==1)
			{
				ptr->next=start;
				start=ptr;
				return;
			}
			for(int i=1;i<pos-1 && temp!=NULL ; i++)
			{
				temp=temp->next;
			}
			if(temp==NULL)
			{
				cout<<"Invalid Position!!"<<endl;
				return;
			}
			ptr->next=temp->next;
			temp->next=ptr;
			cout<<"Node Inserted!!"<<endl;
		}
		void deletion()
		{
			int ch;
			char choice3='y';
			do
			{
				cout<<"\n1. Delete at Begin."<<endl;
				cout<<"\n2. Delete at End."<<endl;
			    cout<<"\n3. Delete at Position."<<endl;
				cout<<"\n4. Exit."<<endl;
				cout<<"Enter your choice.";
				cin>>ch;
				switch(ch)
				{
					case 1: del_begin();
					        break;
					case 2: del_end();
					        break;
					case 3: del_pos();
							break;
					case 4: choice3='n';
					        break;
					default: cout<<"Invalid Choice!!"<<endl;
					         break;
				
				}
				
			}
			while(choice3=='y');
		}
		void del_begin()
		{
			if(start==NULL)
			{
				cout<<"List is Empty!!"<<endl;
				  return;
			}
			node *temp=start;
			start=start->next;
			delete temp;
			cout<<"Node Deleted from beginning!!"<<endl;
			return;
		}
		void del_end()
		{
			if(start==NULL)
			{
				cout<<"List is Empty!!"<<endl;
				return;
			}
			if(start->next==NULL)
			{
				delete start;
				start=NULL;
				return;
			}
			node *current = start;
		    node *previous = NULL;
		    	while(current->next!=NULL)
		    	{
		    		previous=current;
		    		current=current->next;
				}
			previous->next=NULL;
			delete current;	
			cout<<"Node deleted from End!!"<<endl;
		}
		void del_pos()
		{
			int pos;
			cout<<"enter the position of node:";
			cin>>pos;
			if(start==NULL)
			{
				cout<<"List is Empty!!"<<endl;
				return;
			}
			node *temp=start;
			if(pos==1 && temp->next==NULL)
			{
	           node *temp1=start;
			   start=NULL;
			   delete temp1;
			}
			for (int i=1;i<pos-1 && temp!=NULL;i++)
			{
				temp=temp->next;
			}
            if(temp==NULL)
            {
                cout<<"Invalid Position!!"<<endl;
                return;

            }
            node * node_delete=temp->next;
            temp->next=node_delete->next;
            delete node_delete;
		}
		
};
int main()
{
	linkedlist l1;
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
			case 3: l1.deletion();
			        break;
			case 4: choice = 'n';
			        break;
			default: cout<<"Invalid Choice!!"<<endl;
			         break;
		}
		
	}
	while(choice=='y');
	return 0;
}