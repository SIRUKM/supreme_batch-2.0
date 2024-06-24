#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }

    void push(int data)
    {
        top++;
        arr[top] = data;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        else
        {
            top--;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }

        else
        {
            return false;
        }
    }

    int getTop()
    {
        if (top == -1)
        {
            return -1;
        }
        return arr[top];
    }

    int getSize()
    {
        if (top == -1)
            return 0;
        return top + 1;
    }

    void print()
    {
        for (int i = 0; i < getSize(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack st(10);
    st.push(10);
    st.print();

    st.push(20);
    st.print();

    st.push(30);
    st.print();

    return 0;
}