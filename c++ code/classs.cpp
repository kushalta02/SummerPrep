// program to display details of three students using class and object
#include<iostream>
using namespace std;
class student{
    public:
    int rollno;
    string name;
    void getdata(){
        cout<<"Enter roll number : ";
        cin>>rollno;
        cout<<"Enter name : ";
        cin>>name;
    }
    void display(){
        cout<<"Roll number : "<<rollno<<endl;
        cout<<"Name : "<<name<<endl;
    }
};
int main(){
    student a;
    a.getdata();
    a.display();
    return 0;
}