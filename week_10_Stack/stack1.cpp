#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int topIndex;
    int capacity;

public:
    Stack(int capacity)
    {
        arr = new int[capacity];
        topIndex = -1;
        this->capacity = capacity;
    }

    // destructor
    ~Stack()
    {
        delete[] arr;
    }

    void push(int data)
    {
        if (topIndex == capacity - 1)
        {
            cout << "Stack is full --- cannot push : " << data << endl;
            return;
        }
        else
        {
            arr[++topIndex] = data;
            cout << "The data is pushed :" << data << endl;
        }
    }

    void pop()
    {
        if (topIndex == -1)
        {
            cout << "Stack Underflow! No element to pop." << endl;
            return;
        }
        cout << "Popped " << arr[topIndex--] << " from the stack." << endl;
    }
    int topElement()
    {
        if (topIndex == -1)
        {
            cout << "empty" << endl;
            return -1;
        }
        else
        {
            return arr[topIndex];
        }
    }
    bool isEmpty()
    {
        return topIndex == -1;
    }
    int size()
    {
        return topIndex + 1;
    }

    int middleElem()
    {
        int currentSize = size();
        if (currentSize == 0)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int mid = currentSize / 2;
        return arr[mid];
    }
};
int main()
{
    Stack stack(5); // Create a stack with capacity of 5 elements

    stack.push(10); // Push 10
    stack.push(20); // Push 20
    stack.push(30); // Push 30
    stack.push(40); // Push 40
    stack.push(50); // Push 50
    stack.push(60); // Try to push 60 (overflow)

    cout << "top element" << stack.topElement() << endl;
    stack.pop();                                             // Pop the top element (50)
    cout << "Top element is " << stack.topElement() << endl; // Get the top element (20)

    cout << "size of stack: " << stack.size() << endl;
    if (stack.isEmpty())
    {
        cout << "emptu" << endl;
    }
    else
    {
        cout << "not empty" << endl;
    }

    cout << "middle element :" << stack.middleElem() << endl;

    return 0;
}