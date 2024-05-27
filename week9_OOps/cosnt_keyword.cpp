#include <iostream>
using namespace std;
class abc
{
    int x;
    int *y;

public:
    abc()
    {
        x = 0;
        y = new int(0);
    }

    int getX() const
    {
        return x;
    }

    int setX(int _val)
    {
        x = _val;
    }

    int getY()
    {
        int f = 20;
        return *y;
    }

    int setY(int _val)
    {
        *y = _val;
    }
};
int main()
{
    abc a;
    cout<<a.getX()<<endl;
    cout<<a.getY()<<endl;
    return 0;
}

int main2()
{
    // const int x = 4;
    // cout<<x<<endl;

    //     const int *a = new int(2);
    //     cout<<*a<<endl;
    //     int b = 20;
    //     // a = &b;
    //     // cout<<*a<<endl;

    // a = &b;
    // cout<<*a<<endl;

    // int * const a = new int(2);
    // cout<<*a<<endl;
    // *a = 20;
    // cout<<*a<<endl;

    // const int * const a = new int (2);
    // cout<<*a<<endl;
    // *a = 20;
    // cout<<*a<<endl;
    // a = &b;

    return 0;
}