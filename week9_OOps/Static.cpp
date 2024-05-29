#include<iostream>
using namespace std;
class abc{
    public:
    static int x,y;
    void print() const{
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{
    abc obj1;
    obj1.x = 1;
    obj1.y = 2;

    obj1.print();
    
    return 0;
}