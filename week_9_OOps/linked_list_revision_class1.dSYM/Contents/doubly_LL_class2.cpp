#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node()
    {
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void printLL(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        cout << "LL is empty!";
        return;
    }
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int lengthLL(Node *head)
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
    // Ll is empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // ll is not empty
        Node *newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    // empty case me
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insetAtPos(Node *&head, Node *&tail, int data, int pos)
{
    if (head == tail)
    {
        Node *newNode = new Node();
        head = newNode;
        tail = newNode;
    }
    else
    {
        int len = lengthLL(head);
        if (pos == 1)
        {
            insertAtHead(head, tail, data);
        }
        else if (pos == len + 1)
        {
            insertAtTail(head, tail, data);
        }
        else
        {
            // inset at midddle
            Node *newNode = new Node(data);

            Node *prev = NULL;
            Node *curr = head;
            while (pos != 1)
            {
                pos--;
                prev = curr;
                curr = curr->next;
            }

            prev->next = newNode;
            newNode->prev = prev;
            newNode->next = curr;
            curr->prev = newNode;
            // delete(prev, curr);
        }
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 5);
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 15);
    insertAtHead(head, tail, 25);

    insertAtTail(head, tail, 50);

    insetAtPos(head, tail, 60, 6);

    printLL(head);

    return 0;
}