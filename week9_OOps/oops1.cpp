#include <iostream>
using namespace std;
class Student
{
private:
    string gf;

public:
    int id;
    int age;
    bool present;
    string name;
    int nos;

    Student()
    {
        cout << "Constructor is called" << endl;
    }

    Student(int id, int age, bool present, string name, int nos)
    {
        this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
    }
    void study()
    {
        cout << "Student is studying" << endl;
    }

    void sleep()
    {
        cout << "Student is sleeping" << endl;
    }

    void bunk()
    {
        cout << "Student is bunking" << endl;
    }

private:
    void chatting()
    {
        cout << "Student is chatting" << endl;
    }
};
int main()
{

    Student *s1 = new Student(1, 20, true, "Rahul", 5);
    cout << (*s1).name << endl;
    delete s1;
    return 0;
}