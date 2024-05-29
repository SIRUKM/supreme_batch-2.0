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
        cout << "Parameterissed Constructor is called" << endl;
    }

    Student(int id, int age, bool present, string name, int nos, string gf)
    {
        this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        this->gf = gf;
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
Student s1(1, 20, true, "Rahul", 5, "Riya");
Student s2;
s2 = s1;

// cout<<s1.id<<endl;
// cout<<s2.id<<endl;
cout<<s1.name<<endl;
cout<<s2.name<<endl;
    
    return 0;
}