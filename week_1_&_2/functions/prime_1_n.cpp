#include<iostream>
using namespace std;
bool check_prime(int n){
    for(int i = 2; i<n ; i++){
        if (n%i ==0)
        return false;
    }

    return true;
}
int main()
{
    int n; 
    cin>>n;
    // if(n==1) return;

    for(int i = 2; i<=n ; i++){
        bool isprime = check_prime(i);
        if(isprime){
            cout<<i<<" ";
        }
    }
    return 0;
}