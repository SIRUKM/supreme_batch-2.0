#include <iostream>
using namespace std;
class Cqueue
{
    int size;
    int front;
    int rear;
    int *queue;

public:
    Cqueue(int size)
    {
        this->size = size;
        front = rear = -1;
        queue = new int[size];
    }
    ~Cqueue(){
        delete[] queue;
    }

    void enqueue(int data){
        if()
    }
};
int main()
{

    return 0;
}