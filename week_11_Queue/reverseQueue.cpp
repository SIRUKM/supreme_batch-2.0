#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverseQ(queue<int> & q){
    stack<int> s;
    while(!q.empty()){
        int frontEle = q.front();
        s.push(frontEle);
        q.pop();
    }

    while(s.empty()){
        int top = s.top();
        q.push(top);
        s.pop();
    }
}

void print(queue<int> q){
    cout<<"Printing Queue"<<endl;

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

void revereseRecurr(queue<int> q){
    if(!q.empty()){
        return;
    }

    int frontElem = q.front();
    q.pop();

    revereseRecurr(q);
    q.push(frontElem);
}
void revereseKelement(queue<int>& q, int k){
    if (q.empty() || k > q.size() || k <= 0) {
        return;
    }

    stack<int> s;
    for (int i = 0; i < k; ++i) {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    for (int i = 0; i < q.size() - k; ++i) {
        q.push(q.front());
        q.pop();
    }
}
void interleave(queue<int> &q){
    queue<int> p;
    int n = q.size()/2;
    int i =0;
    while(i< n){
        p.push(q.front());
        q.pop();
        i++;
    }
    while(i<n){
        q.push(p.front());
        p.pop();
        q.push(q.front());
        q.pop();
        i++;
    }
    

}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    print(q);

    // reverseQ(q);
    // print(q);

    // revereseRecurr(q);
    // print(q);
    // int k = 3;

    // revereseKelement(q,k);
    // print(q);

    interleave(q);
    print(q);

    return 0;
}