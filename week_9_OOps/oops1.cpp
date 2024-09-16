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
    int *v;

    Student()
    {
        cout << "Constructor is called" << endl;
    }

    Student(int id, int age, bool present, string name, int nos, string gf)
    {
        cout << "parametersided constructor is called" << endl;
        this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        this->gf = gf;
        this->v = new int(10);
    }
    // copy constructor
    Student(const Student &srcobj)
    {
        cout << "Copy constructor is called" << endl;
        this->name = srcobj.name;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->present = srcobj.present;
        this->nos = srcobj.nos;
        this->gf = srcobj.gf;
    }

    // getter setter
    string getGfName()
    {
        return gf;
    }

    void setGfName(string gf)
    {
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

    ~Student()
    {
        cout << "Destructor is called" << endl;
    }

private:
    void gfchatting()
    {
        cout << "Student is chatting" << endl;
    }

    void cheating(){
        cout<<"Student is cheating"<<endl;
    }
};
int main()
{
    // Student s1(1, 20, true, "Rahul", 5, "Riya");
    // Student s2 = s1;
    // // s2 = s1; // copy constructor is called
    // // Student s2(s1); // copy constructor is called

    // // cout<<s1.id<<endl;
    // // cout<<s2.id<<endl;
    // cout << s1.name << endl;
    // cout << s2.name << endl;

    Student s1(1, 20, true, "Rahul", 5, "Riya");
    cout << s1.name << endl;
    cout << s1.getGfName() << endl;
    s1.setGfName("Reetu");
    cout << s1.getGfName() << endl;

    return 0;
}