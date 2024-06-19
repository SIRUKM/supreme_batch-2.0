#include <iostream>
#include <stack> // Include the <stack> header file
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "size of stack is: " << st.size() << endl;
    cout << st.top()<<endl;
    // while(!st.empty()){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }

    if (st.empty())
    {
        cout << "stack is empty"<<endl;
    }
    else
    {
        cout << "stack is not empty"<<endl;
    }

    cout<<st.top()<<endl;

    return 0;
}