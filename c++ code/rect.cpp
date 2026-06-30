#include<iostream>
using namespace std;
class rectangle{
    public:
        int length;
        int breadth;
        int height;
        rectangle(int l,int b){
            int area ;
            area=l*b;
            cout<<"area of rectangle is: "<<area<<endl;
        }
};
int main(){
    int l1=45;
    int b1=20;
    rectangle r1(l1,b1);
    return 0;
}