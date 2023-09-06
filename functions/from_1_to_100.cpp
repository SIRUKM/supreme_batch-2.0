#include<iostream>
using namespace std;
void print_one_to_hundred(int n){
    for ( int i = 1 ;i <=n;++i){
        cout<<i<<endl;
    }
}
int main()
{
    int n=100;
    print_one_to_hundred(n);
    return 0;
}