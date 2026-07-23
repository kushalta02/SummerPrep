// maximum proioriy queue
#include<iostream>
using namespace std;
#define size 5
class max_prioq{
    public:
    int front,rear;
    int arr[size];
    public:
    max_prioq(){
        front=-1;
        rear=-1;
    }
    void enque(){
        int val;
        cout<<"enter a value "<<endl;
        cin>>val;
        if(rear==size-1){
            cout<<" queue overflow"<<endl;
            return ;
        }
        int i;
        for(i=rear;i>0 &&arr[i]<val;i--){
            arr[i+1]=arr[i];
        }
        arr[i+1]=val;
        rear++;

    }
    void deque(){
        if(rear==-1){
            cout<<"queue is empty .."<<endl;
            return;
        }
        cout<<arr[front]<<"deleted from queue ."<<endl;
        if(rear==front){
            front=-1;
        }
        for(int i=front;i<rear;i++){
            arr[i]=arr[i+1];

        }
        rear--;

    }
    void display(){
        if(front==-1){
            cout<<"QUEUE is empty.."<<endl;
            return;
        }
        cout<<"queue elements"<<endl;
        for(int j=front;j<=rear;j++){
            cout<<arr[j]<<" "<<endl;
        }

    }
};
int main(){
    max_prioq p1;
    int ch;
    char choice='y';
    do{
        cout<<" Maximum Priority queue Operations\n"<<endl;
        cout<<"1. Enque "<<endl;
        cout<<"2.Deque"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice :"<<endl;
        cin>>ch;
    switch (ch){
            case 1: p1.enque();
                    break;
                    break;
            case 3: p1.display();
                    break;
            case 4:
                choice='n';
                break;
            default:
                    cout<<"Invalid Choice"<<endl;
                }
        
    }
    while(choice=='y');
    return 0;
}

