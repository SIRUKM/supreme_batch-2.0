#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class linkedList
{
private:
    Node *head;

public:
    linkedList()
    {
        head = NULL;
    }

    void insert(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }
    int lengthOfLL()
    {
        Node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void reverse()
    {
        cout << "The reversed list is as : ";
        Node *prev = NULL;
        Node *curr = head;
        Node *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void findMiddleElement()
    {
        int len = lengthOfLL();
        int mid = len / 2 ;
        Node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            if (count == mid)
            {
                cout << temp->data;
                return;
            }
            count++;
            temp = temp->next;
        }
        cout << endl;
    }

    // bool checkLoop(){
    //     Node * slow = head;
    //     Node * fast = head;

    //     while()
    // }
};
int main()
{
    linkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(40);
    list.insert(70);
    list.insert(90);
    list.print();
    // list.reverse();
    // list.print();
    // cout << list.lengthOfLL() << endl;
    // list.findMiddleElement();

    return 0;
}