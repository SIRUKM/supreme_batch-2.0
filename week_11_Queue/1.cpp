#include <iostream>
using namespace std;
class Queue
{
    int front, rear, size;
    int *queue;

public:
    // construtor
    Queue(int size)
    {
        this->size = size;
        queue = new int[size];
        front = rear = -1;
    }
    ~Queue(){
        delete[] queue;
    }

    void enqueue(int data)
    {
        if (rear == size - 1)
        {
            cout << "overflow" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            queue[rear] = data;
        }
        else
        {
            queue[++rear] = data;
        }
    }

    void dequeue()
    {
        if (front == -1 && rear == -1)
        {
            cout << "queue is empty: " << endl;
        }
        else if (front == rear)
        {
            queue[front] = -1;
            front ++;
        }
        else
        {
            queue[front] = -1;
            front++;
        }
    }
    void print()
    {        for (int i = front; i <=rear; i++)
        {
            cout << queue[i] << " ";
            front++;
        }
        cout << endl;
    }
};
int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.print();
    q.dequeue();
    cout<<"sub1" <<endl;
    q.dequeue();
    cout<<"sub";
    q.print();
    

    return 0;
}