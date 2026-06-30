#include <iostream>
using namespace std;
class student{
    public:
    int rollno;
    std::string name;
    private:
        std::string add;
    public:
    // parmaetrized constructor
        student(int rollno,std::string n,std::string add)
        {
        name=n;
        rollno=rollno;
        
        add=add;

        }
        public:
        // copy constructor
        student(student &obj)
        {
            name=obj.name;
            rollno=obj.rollno;
            add=obj.add;
        }
        string getadd(){
            return add;
        }
        void setadd(std::string a){
            add=a;
        }
};
int main()
{
    student s1(1,"Alice","123 Main St");
    

    std::cout<<"size of class student is: "<<sizeof(s1)<<std::endl;
    s1.getadd();
    cout<<"address of student is: "<<s1.getadd()<<endl;
    s1.setadd("456 el");
    cout<<"address of student is: "<<s1.getadd()<<endl;
    return 0;
}