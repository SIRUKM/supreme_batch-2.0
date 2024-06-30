#include<iostream>
#include<stack>
using namespace std;
int getMiddleElement(stack<int> &st){
    int size = st.size();
    if(st.empty()){
        return -1;
    }
    else{
        // stack is not empty
        int pos = 0;
        if(size & 1){
            pos = size/2 + 1;
        }
        else{
            pos = size/2;
        }
    }
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    int mid = getMiddleElement(st);
    cout<<"Middle element is: "<<mid<<"\n"; // Output: "Middle element is: 3
    return 0;
}