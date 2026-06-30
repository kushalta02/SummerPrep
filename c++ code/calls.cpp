#include<iostream>
using namespace std;
void swap( int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<"value of a is: "<<*a<<endl;
    cout<<"value of b is: "<<*b<<endl;

}
void swapp(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"value of a is: "<<a<<endl;
    cout<<"value of b is: "<<b<<endl;
}
int main(){
    int a=20,b=30;
    swap(&a,&b);
    swapp(a,b);
    cout<<" value of a "<<a<<endl;
    cout<<" value of b "<<b<<endl;
    return 0;
}