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

    cout << sizeof(Student) << endl;

    Student s1;
    s1.name = "Rahul";
    s1.age = 21;
    s1.id = 101;
    s1.nos = 4;
    s1.present = true;

    Student s2;
    s2.name = "Rohit";
    s2.age = 22;    
    s2.id = 102;
    s2.nos = 5;
    s2.present = false;



    

    return 0;
}