#include <iostream>
using namespace std;

class Bird
{
public:
    int age;
    int weight;
    int no;
    string color;

    void eat()
    {
        cout << "Bird is eating" << endl;
    }
    void fly()
    {
        cout << "Bird is flying" << endl;
    }
};
class Sparrow : public Bird
{
public:
    Sparrow(int age, int weight, int no, string color)
    {
        this->age = age;
        this->weight = weight;
        this->no = no;
        this->color = color;
    }
    void grassing()
    {
        cout << "Sparrow is grassing" << endl;
    }
};
class Pigeon : public Bird
{
public:
    void grassing()
    {
        cout << "Pigeon   is grassing" << endl;
    }
};
int main()
{
    Sparrow s(5, 30, 50, "red");
    cout << s.age << endl;
    s.eat();
    Pigeon p;

    return 0;
}