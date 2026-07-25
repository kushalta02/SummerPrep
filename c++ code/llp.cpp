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
        void at_begin(){
            node*start=NULL;
            if(start==NULL){
                cout<<"emty"<<endl;
            int val;
            cout<<"val"<<endl;
            cin>>val;
            node*ptr = new node(val);
            ptr->next=start;
            start=ptr;
            cout<<val<<"inserted"<<endl;
            }
        }
        void at_end(){
            int val;
            cout<<"val"<<endl;
            cin>>val;
            node*temp=start;
            node*ptr=new node(val);
            if(start==NULL){
                start=ptr;
            }
            else{
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next==ptr;
                cout<<"done"<<endl;
            }

        }
        void display(){
            node*temp=start;
            if(start==NULL){
                cout<<" empty";
            }
            while(temp!=NULL){
                cout<<temp->data<<"->";
                temp=temp->next;

            }
        }
        void at_pos(){
            int val;
            cout<<"val"<<endl;
            cin>>val;
            int pos;
            cout<<"enter position"<<endl;
            cin>>pos;
            node*temp=start;
            node*ptr=new node(val);
            if(pos==1){
                ptr->next=start;
                start=ptr;
                cout<<val<<"inserted"<<endl;
            }
            for(int i=1;i<pos-1 && temp!=NULL;i++){
                temp=temp->next;
            }
            if(temp==NULL){
                cout<<"enter valid "<<endl;
            }
            ptr->next=temp->next;
            temp->next=ptr;
            
        }
        void deletion(){
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
        void del_begin(){

        }
        void del_end(){

        }
        void del_pos(){

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