#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

void displayList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        /* code */
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}
void lengthLL(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != nullptr)
    {
        count++;
        temp = temp -> next;
    }
    cout << count;
}

int main()
{
    Node *head = new Node();
    head->data = 10;
    head->next = nullptr;

    // cout<<"Data in the first node: "<<head->data<<endl;
    // cout<<"next of first noed"<<head->next;

    // create second node
    Node *second = new Node();
    second->data = 20;
    second->next = nullptr;

    head->next = second;

    // // cout<<"first node ka data"<<head->data<<endl;
    // // cout<<"second node ka data"<<head->next->data;

    // // display the list
    // displayList(head);
    // lengthLL(head);

    // delete head;
    // delete second;

    // ************ for insertaion ***********

    return 0;
}