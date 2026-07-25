#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node()
    {
        data = 0;
        next = NULL;
    }

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class linkedlist
{
    node *start = NULL;

public:

    // INSERT MENU
    void insert()
    {
        int ch;
        char choice2 = 'y';

        do
        {
            cout << "\n1. Insert at Begin." << endl;
            cout << "2. Insert at End." << endl;
            cout << "3. Insert at Position." << endl;
            cout << "4. Exit." << endl;

            cout << "Enter your choice: ";
            cin >> ch;

            switch (ch)
            {
            case 1:
                at_begin();
                break;

            case 2:
                at_end();
                break;

            case 3:
                at_pos();
                break;

            case 4:
                choice2 = 'n';
                break;

            default:
                cout << "Invalid Choice!!" << endl;
            }

        } while (choice2 == 'y');
    }


    // INSERT AT BEGINNING
    void at_begin()
    {
        int val;

        cout << "Enter value: ";
        cin >> val;

        node *ptr = new node(val);

        if (start == NULL)
        {
            start = ptr;
        }
        else
        {
            ptr->next = start;
            start = ptr;
        }

        cout << "Node Inserted!!" << endl;
    }


    // INSERT AT END
    void at_end()
    {
        int val;

        cout << "Enter value: ";
        cin >> val;

        node *ptr = new node(val);

        if (start == NULL)
        {
            start = ptr;
        }
        else
        {
            node *temp = start;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = ptr;
        }

        cout << "Node Inserted at End!!" << endl;
    }


    // DISPLAY
    void display()
    {
        node *temp = start;

        if (start == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }


    // INSERT AT POSITION
    void at_pos()
    {
        int val;
        int pos;

        cout << "Enter value: ";
        cin >> val;

        cout << "Enter position: ";
        cin >> pos;

        node *ptr = new node(val);

        // Position 1 means beginning
        if (pos == 1)
        {
            ptr->next = start;
            start = ptr;

            cout << "Node inserted at position 1." << endl;
            return;
        }

        node *temp = start;

        // Move temp to node before required position
        for (int i = 1; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }

        // Invalid position
        if (temp == NULL)
        {
            cout << "Invalid position." << endl;
            delete ptr;
            return;
        }

        ptr->next = temp->next;
        temp->next = ptr;

        cout << "Node inserted at position " << pos << "." << endl;
    }


    // DELETE MENU
    void deletion()
    {
        int ch;
        char choice3 = 'y';

        do
        {
            cout << "\n1. Delete at Begin." << endl;
            cout << "2. Delete at End." << endl;
            cout << "3. Delete at Position." << endl;
            cout << "4. Exit." << endl;

            cout << "Enter your choice: ";
            cin >> ch;

            switch (ch)
            {
            case 1:
                del_begin();
                break;

            case 2:
                del_end();
                break;

            case 3:
                del_pos();
                break;

            case 4:
                choice3 = 'n';
                break;

            default:
                cout << "Invalid Choice!!" << endl;
            }

        } while (choice3 == 'y');
    }


    // DELETE FROM BEGINNING
    void del_begin()
    {
        if (start == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }

        node *temp = start;

        start = start->next;

        delete temp;

        cout << "Node deleted from beginning." << endl;
    }


    // DELETE FROM END
    void del_end()
    {
        if (start == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }

        // Only one node
        if (start->next == NULL)
        {
            delete start;
            start = NULL;

            cout << "Node deleted from end." << endl;
            return;
        }

        node *temp = start;

        // Stop at second-last node
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;

        temp->next = NULL;

        cout << "Node deleted from end." << endl;
    }


    // DELETE FROM POSITION
    void del_pos()
    {
        int pos;

        cout << "Enter position to delete: ";
        cin >> pos;

        if (start == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }

        // Delete first node
        if (pos == 1)
        {
            del_begin();
            return;
        }

        node *temp = start;

        // Move to node before target node
        for (int i = 1; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }

        if (temp == NULL || temp->next == NULL)
        {
            cout << "Invalid position." << endl;
            return;
        }

        node *delNode = temp->next;

        temp->next = delNode->next;

        delete delNode;

        cout << "Node deleted from position " << pos << "." << endl;
    }
};


int main()
{
    linkedlist l1;

    int ch;
    char choice = 'y';

    do
    {
        cout << "\n===== LINKED LIST PROJECT =====" << endl;
        cout << "1. Insert." << endl;
        cout << "2. Display." << endl;
        cout << "3. Deletion." << endl;
        cout << "4. Exit." << endl;

        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            l1.insert();
            break;

        case 2:
            l1.display();
            break;

        case 3:
            l1.deletion();
            break;

        case 4:
            choice = 'n';
            break;

        default:
            cout << "Invalid Choice!!" << endl;
        }

    } while (choice == 'y');

    return 0;
}