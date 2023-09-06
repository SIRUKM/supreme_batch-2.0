#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin>>a>>b;
    //and operation
    cout<< (a&b) <<endl;

    //or operation
    cout<< (a|b)<<endl;

    //not operation
    cout<<~a<<endl;
    cout<<(~a)<<endl;
    cout<<~(a)<<endl;

    //xor operation
    cout<<((a^b))<<endl;




    return 0;
}