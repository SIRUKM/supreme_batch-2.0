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
        this->data = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int findLength(Node *head)
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
    Node *temp = new Node(data);
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
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
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
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insertAtMiddle(Node *&head, Node *&tail, int data, int position)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        if (position == 1)
        {
            insertAtHead(head, tail, data);
        }
        else if (position == findLength(head) + 1)
        {
            insertAtTail(head, tail, data);
        }
        else
        {
            Node *newNode = new Node(data);
            Node *prevNode = NULL;
            Node *currNode = NULL;
            while (position != 1)
            {
                position--;
                prevNode = currNode;
                currNode = currNode->next;
            }
            prevNode->next = newNode;
            newNode->prev = prevNode;
            newNode->next = currNode;
            currNode->prev = newNode;
        }
    }
}

void deletion(Node *&head, Node *&tail, int data, int position)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
    }
    if(head == tail){
        Node * temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
    }

}

    int main()
    {
        Node *head = NULL;
        Node *tail = NULL;
        insertAtHead(head, tail, 10);
        insertAtHead(head, tail, 20);
        insertAtHead(head, tail, 30);

        print(head);

        insertAtTail(head, tail, 400);

        print(head);

        insertAtMiddle(head, tail, 100, 2);
        print(head);
        return 0;
    }