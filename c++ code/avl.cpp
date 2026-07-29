// AVL Tree
#include <iostream>
using namespace std;
class graph{
    int vertices;
    int **adjacencyMatrix;
};
int main(){
    graph g;
    int ch;
    char choice='y';
    do{
        cout<<"\n1. Create Graph"<<endl;
        cout<<"2. Display Graph"<<endl;
        cout<<"3. Insert Edge"<<endl;
        cout<<"4. delete Edge"<<endl;
        cout<<"5. count Edges"<<endl;
        cout<<"6. exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                // g.createGraph();
                break;
            case 2:
                // g.displayGraph();
                break;
            case 3:
                // g.insertEdge();
                break;
            case 4:
                // g.deleteEdge();
                break;
            case 5:
                // g.countEdges();
                break;
            case 6:
                choice='n';
                break;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }while(choice=='y');
    return 0;

}