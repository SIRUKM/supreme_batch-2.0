#include<iostream>
using namespace std;

int recursion(int n){
    if(n==0 || n==1)
    return 1;

    int ans = n * recursion(n-1);
    return ans;
}
int main()
{
    cout<<recursion(5)<<endl;
    return 0;
}