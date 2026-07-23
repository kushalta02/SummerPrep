// priority queue using array
#include<iostream>
using namespace std;
#define SIZE 5
class p_queue{
    int front,rear;
    int arr[SIZE];
    public:
    p_queue(){           
        front=-1;
        rear=-1;
    }
    void enqueue(){
        int val;
        cout<<"enter a value "<<endl;
        cin>>val;
        if(rear==SIZE-1){
            cout<<" queue overflow"<<endl;
            return ;
        }
        int i;
        for(i=rear;i>=0 && arr[i]>val;i--){
            arr[i+1]=val;
            rear++;
            cout<<val<<"inserted into prio queue"<<endl;
        }
    }
    void dequeue(){
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
    p_queue p;
    int ch;
    char choice='y';
    do{
        cout<<"\n Priority Queue operation "<<endl;
        cout<<"1.enqueue"<<endl;
        cout<<"2.dequeue"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<" Enter your choice "<<endl;
        cin>>ch;
        switch (ch){
            case 1: p.enqueue();
                    break;
            case 2: p.dequeue();
                    break;
            case 3: p.display();
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
