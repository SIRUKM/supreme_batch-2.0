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

    return 0;
}