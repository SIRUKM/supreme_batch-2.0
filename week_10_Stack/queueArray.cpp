#include <iostream>
using namespace std;
class Queue
{
public:
    int size;
    int *arr;
    int front;
    int rear;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int val)
    {
        if (rear == size - 1)
        {
            cout << "Queue is full" << endl;
            return;
        }

        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }

    void pop(){
        if(front == -1 && rear == -1){
            cout<<"Queue is empty" <<endl;
            return;
        }

        else if( front == rear){
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }

        else{
            arr[front] = -1;
            front++;
        }
    }

    bool isEmpty(){
        if(front == -1 && rear == -1) return true;
        return false;
    
    }

    int getSize(){
        return rear - front + 1;
    }

    int getFront(){
        if(front == -1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }

    void print(){
        if(front == -1 && rear == -1){
            cout<<"Queue is empty"<<endl;
            return;
        }
        for(int i = front; i<=rear; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.print();
    return 0;
}