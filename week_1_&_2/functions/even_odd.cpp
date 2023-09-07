#include<iostream>
using namespace std;
bool checkeven_odd(int n){
    if((n%2)==0)
    return true;

    else return false;
}
int main()
{
    int n;
    cin>>n;
    bool result = checkeven_odd(n);
    if(result == true)
    cout<<"even";

    else cout<<"odd";
    return 0;
}