// Stack menu driven program in C++ using array implementation
#include <iostream>
using namespace std;
#define MAX 100
class stack{
    int arr[MAX];
    int top;
    public:
    stack() {
        top = -1;
    }
    int isFull() {
        return top == MAX - 1;
    }
    int isEmpty() {
        return top == -1;
    }
    void push(int value) {
        if(top == MAX - 1){
            cout<<"Stack Overflow!"<<endl;
            return;
        }
            top++;
            arr[top]=value;
            cout<<"Value pushed: "<<value<<endl;
        
    }
    void pop() {
        if(top == -1)
        {
            cout<<"Stack Underflow!"<<endl;
            return;
        }
        cout<<"Value popped: "<<arr[top]<<endl;
        top--;
    }
    void peek(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            cout<<"Peek element "<<arr[top]<<endl;
        }
    }
    void display(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Stack elements: ";
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

};
int main(){
    stack s;
    char choice='y';
    int ch;
    do{
        cout<<"\n Stack Operations"<<endl;
        cout<<"1. Push "<<endl;
        cout<<"2. Pop "<<endl;
        cout<<"3. Peek "<<endl;
        cout<<"4. Display "<<endl;
        cout<<"5. Exit "<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>ch;
        switch(ch){
            case 1: int value;
                cout<<"Enter value to push: "<<endl;
                cin>>value;
                s.push(value);
                break;
            case 2:
                // Pop implementation
                s.pop();
                break;
            case 3:
                // Peek implementation
                s.peek();
                break;
            case 4:
                // Display implementation
                s.display();
                break;
            case 5:
                choice = 'n';
                break;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
     while(choice == 'y');
    
}
