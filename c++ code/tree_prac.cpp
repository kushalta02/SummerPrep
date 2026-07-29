#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node() {
        data = 0;
        left = NULL;
        right = NULL;
    }

    node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class binaryTree {
    node* root;
    int count;

    void create(node*& temp) {
        if (count == 7) {
            return;
        }

        int val;

        cout << "Enter data for node " << count + 1 << ": ";
        cin >> val;

        node* ptr = new node(val);
        temp = ptr;
        count++;

        cout << "Enter left child of " << val << endl;
        create(temp->left);

        cout << "Enter right child of " << val << endl;
        create(temp->right);
    }

    void preorder(node* temp) {
        if (temp == NULL) {
            return;
        }

        cout << temp->data << " ";

        preorder(temp->left);
        preorder(temp->right);
    }

public:
    binaryTree() {
        root = NULL;
        count = 0;
    }

    void create_bt() {
        count = 0;
        create(root);
    }

    void display_preorder() {
        preorder(root);
    }
};

int main() {
    binaryTree b1;

    int ch;
    char choice = 'y';

    do {
        cout << "\n1. Create Tree" << endl;
        cout << "2. Display Tree" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
        case 1:
            b1.create_bt();
            break;

        case 2:
            cout << "Preorder Traversal: ";
            b1.display_preorder();
            cout << endl;
            break;
        case 3:
            choice = 'n';
            break;

        default:
            cout << "Invalid choice" << endl;
        }

        

    } while (choice == 'y');

    return 0;
}