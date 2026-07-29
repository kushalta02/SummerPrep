#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node* right;
    node * next;
    node(){
        data=0;
        left=NULL;
        right=NULL;
    }
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
class binaryTree{
    node*root;
    node * create_bt(){
            int val;
            cout<<"Enter data(-1 for no node):";
            cin>>val;
            if(val==-1){
                return NULL;
            }
            node *ptr=new node(val);
            cout<<"Enter left child of "<<val<<endl;
            ptr->left=create_bt();
            cout<<"Enter right child of "<<val<<endl;
            ptr->right=create_bt();
            return ptr;
        }
        
    void preorder(node *temp){
        if(temp==NULL){
            return;

        }
        cout<<temp->data<<" ";
        preorder(temp->left);
        preorder(temp->right);
    }
        void inorder(node *temp){
            if(temp==NULL){
                return;
            }
            inorder(temp->left);
            cout<<temp->data<<" ";
            inorder(temp->right);

        }
        void postorder(node *temp){
            if(temp==NULL){
                return;
            }
            postorder(temp->left);
            postorder(temp->right);
            cout<<temp->data<<" ";
        }
    public:
        binaryTree(){
            root=NULL;
        }
        void create(){
            root=create_bt();
        }
        void preorder(){
            cout<<"Preorder Traversal:"<<endl;
            preorder(root);
        }
        void inorder(){
            cout<<"Inorder Traversal:"<<endl;
            inorder(root);
        }
        void postorder(){
            cout<<"Postorder Traversal:"<<endl;
            postorder(root);
        }
        
        
};
int main(){
    binaryTree bt;
    char choice='y';
    int ch;
    do{
        cout<<"\n Binary Tree "<<endl;
        cout<<"1. Create Binary Tree"<<endl;
        cout<<"2. Pre-Order Display"<<endl;
        cout<<"3. In-Order Display"<<endl;
        cout<<"4. Post-Order Display"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<" Enter your choice"<<endl;
        cin>>ch;
        switch(ch){
            case 1:
                bt.create();
                break;
            case 2:bt.preorder();
                break;
            case 3:bt.inorder();
                break;
            case 4:bt.postorder();
                break;
            case 5:
                choice='n';
                break;
            default: cout<<" Invalid"<<endl;
            break;
        }
    }
    while(choice=='y');
    return 0;
}