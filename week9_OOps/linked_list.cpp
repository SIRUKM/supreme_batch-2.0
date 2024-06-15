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
int printLength(Node *head)
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

void insetAtTail(Node *&tail, int data)
{
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if (position < 1)
    {
        cout << "Invalid position" << endl;
        return;
    }
    int length = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    // Rest of the code...

    if (position > length)
    {
        cout << "Invalid position" << endl;
        return;
    }
    if (position == 1)
    {
        insertAtHead(head, tail, data);
    }
    else if (position == length)
    {
        insetAtTail(tail, data);
    }

    else
    {
        // insert at the middle
        Node *temp = new Node(data);
        Node *current = head;
        for (int i = 1; i < position - 1; i++)
        {
            current = current->next;
        }
        temp->next = current->next;
        current->next = temp;
    }
}

void deleteNode(Node *&head, Node * &tail, int position)
{
    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
        return;
    }
    int len = printLength(head);
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    else if (position == len)
    {
        Node * prev = head;
        while(prev->next != tail){
            prev = prev->next;
        }
        prev->next = NULL;
        delete tail;
        tail = prev;

    }
    else
    {
        Node * prev = NULL;
        Node * current = head;
        while(position > 1){
            prev = current;
            current = current->next;
            position--;
        }

        prev->next = current->next;
        current->next = NULL;
        delete current;

    }
}
int main()
{
    // Node *first = new Node(10);
    // Node *second = new Node(20);
    // Node *third = new Node(30);
    // Node *fourth = new Node(40);

    // Node *head = first;
    // Node *tail = fourth; // Declare the 'tail' variable
    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // printLinkedList(head);
    // // printLength(head);
    // insertAtHead(head, tail, 5);
    // // printLength(head);
    // insetAtTail(tail, 50);
    // printLinkedList(head);

    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);
    printLinkedList(head);
    insertAtPosition(head, tail, 100, 3);
    printLinkedList(head);

    return 0;
}