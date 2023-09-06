#include<iostream>
using namespace std;
void check_even_odd(int n){
    if (n%2==0)
    cout<<"even";

    else cout<<"odd";
}
int main()
{
    int n;
    cin>>n;
    check_even_odd(n);
    return 0;
}