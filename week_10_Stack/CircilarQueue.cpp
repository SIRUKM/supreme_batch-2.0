#include<iostream>
using namespace std;

class Cqueue{
    public:
    int size;
    int *arr;
    int front;
    int rear;

    Cqueue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int val){
        if(front == 0 && rear == size - 1){
            cout<<"Queue is full"<<endl;
            return;
        }

        else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = val;
        }
        else  if(rear == size -1 && front != 0){
            rear = 0;
            arr[rear] = val;
        }
        else{
            rear++;
            arr[rear] = val;
        }
    }

    void pop(){
        if(front == -1 && rear == -1){
            cout<<"Queue is empty"<<endl;
            return;
        }

        else if(front == rear){
            arr[front] = -1;
            front ++; 
        }
        else if(front == size-1){
            arr[front] = -1;
            front++;
        }
        else {
            arr[front] = -1;
            front++;
        }     
    }

    void print(){
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Cqueue q(5);
    q.push(10);
    q.push(20);
    
    q.print();
    
    return 0;
}