 #include<iostream>
using namespace std;
class book{
    public:
        int bookid;
        std::string title;
        int price;
        book(){
            bookid=0;
            title=" ";
            price=0;
        }
        // for parmetrizesd constructor deafault values 
//         book(int id=10,std::string t=" ",int p=0){
//             bookid=id;
//             title=t;
//             price=p;
//         }
};
int main(){
    book b1;
    b1.bookid=101;
    b1.title="C++ Programming";
    b1.price=500;
    cout<<"book id is: "<<b1.bookid<<endl;
    cout<<"book title is: "<<b1.title<<endl;
    cout<<"book price is: "<<b1.price<<endl;
    return 0;
}