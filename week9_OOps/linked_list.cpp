#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        cout << "default Constructor is called" << endl;
        this->next = NULL;
    }
    Node(int data)
    {
        cout << "parameterized Constructor is called" << endl;
        this->data = data;
        this->next = NULL;
    }
};

void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void printLength(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << "Length of linked list is: " << count << endl;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        
    }
}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);

    Node *head = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    printLinkedList(head);
    // printLength(head);
    insertAtHead(head, tail, 5);
    // printLength(head);
    printLinkedList(head);

    return 0;
}