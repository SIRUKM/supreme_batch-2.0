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


    Student(){
        cout<<"calling default const :"<<endl;
    }

    Student(int id, int age, bool present, string name, int nos){
        this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        cout<<"parameterised constructor with all attributes :"<<endl;
    }

    Student(const Student &srcobj){
        this->name = srcobj.name;
        this->age = srcobj.age;
        this->gf = srcobj.gf;
        this->nos = srcobj.nos;
        this->present = srcobj.present;
        this->id = srcobj.id;
        
    }

    void study()
    {
        cout << "studing" << endl;
    }

    void sleep()
    {
        cout << "sleeping" << endl;
    }

    void bunk()
    {
        cout << "bunking" << endl;
    }

private:
    void chatting()
    {
        cout << "chatting" << endl;
    }
};
int main()
{
    // Student S1;
    // S1.id = 1;
    // S1.age = 20;
    // S1.present = 0;
    // S1.name = "Goli";
    // S1.nos = 100;

    // Student S2;
    // S2.id = 2;
    // S2.age = 25;
    // S2.present = 1;
    // S2.name = "Pintu";
    // S2.nos = 10;

    Student s1(1,20,0, "pinku", 100);
    Student s2;
    s2 = s1;
    cout<<s1.name<<endl;
    cout<<s2.name<<endl;

    return 0;
}