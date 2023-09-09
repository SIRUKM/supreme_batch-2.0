#include<iostream>
using namespace std;
// void solve(int &n){
//     ++n;
//     cout<<"inside solve :"<<n<<endl;
// }
int main()
{
    int n = 100;
    // cout<<"value of n"<<n<<endl;
    int &m = n;//refrence variable -> bus n maaanm m v hoo gaya / now n has two names i.e n & m
    cout<<n<<endl<<m<<endl;

    // int *m = &n;//dusra variable m banoo jisme n ka address rahega ->n ->100->address:x, m->n ka address(x)

    cout<<"the value of m : "<<m<<endl;
    cout<<"checking &m value :"<<&m<<"   &n = "<< &n<<endl;
    cout<<"m ka mtlb"<<m<<endl;
    // n++;
    // solve(n);
    // cout<<"inside main :"<<n<<endl;
    return 0;
}