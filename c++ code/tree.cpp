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
