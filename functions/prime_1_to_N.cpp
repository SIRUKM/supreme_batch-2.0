#include<iostream>
using namespace std;
void print_all_primes(int n){
    if(n== 1) return;
    for ( int i =2 ;i<=n;++i ){
        for(int j = 2; j<n)
        if ((n%i)!=0 ) {
            cout<<i<<"  ";
        }
    }    

}
int main()
{
    int n;
    cin>>n;
    print_all_primes(n);
    return 0;
}