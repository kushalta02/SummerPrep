// program to print sm and average using class and object
#include<iostream>
using namespace std;
class adds{
    public:
    int a,b;
    void sum(){
        std::cout<<"Enter two numbers : ";
        cin>>a>>b;
        std::cout<<"Sum of "<<a<<" and "<<b<<" is : "<<a+b<<std::endl;
        std::cout<<"Average of "<<a<<" and "<<b<<" is : "<<(a+b)/2.0<<std::endl;
    }
};
int main(){
    adds a;
    a.sum();
    return 0;
}

