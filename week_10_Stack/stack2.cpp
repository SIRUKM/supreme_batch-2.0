#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    cout << q.size() << endl;
    q.push(10);
    cout << q.size() << endl;

    if(q.empty()==true) cout<<"Queue is empty"<<endl;
    else cout<<"Queue is not empty"<<endl;


    q.pop();
    cout<<q.size()<<endl;

    q.push(10);
    q.push(20);
    q.push(30);

    cout<<"Front element: "<<q.front()<<endl;
    cout<<"Back element: "<<q.back()<<endl;
     return 0;
}