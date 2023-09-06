//factorial of a number

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i = 1;
    int fact = 1;
    while(i<=n){
        fact*=n;
        n--;
    }
    cout<<fact;
    return 0;
}