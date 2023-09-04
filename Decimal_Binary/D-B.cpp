#include<iostream>
using namespace std;

int decimaltobinary_Method1(int n){
    //Division Method
    while(n>0){
        int bit = n%2;
        cout<<bit<<" "<<endl;
        n/=2;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int binary = decimaltobinary_Method1(n);
    return 0;
}