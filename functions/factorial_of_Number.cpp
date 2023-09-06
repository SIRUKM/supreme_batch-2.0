#include<iostream>
using namespace std;
long factorial(int n){
    long fact = 1;
    while(n!=0){
        fact *= (n--);
    }
    return fact;
}
int main()
{
    int n;
    cin>>n;
    long result = factorial(n);
    cout<<result;
    return 0;
}