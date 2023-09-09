#include<iostream>
using namespace std;
void solve(int n){
    n+=1;
    cout<<n<<endl;
}
int main()
{
    int n = 90;
    n--;
    solve(n);
    cout<<n;
    return 0;
}