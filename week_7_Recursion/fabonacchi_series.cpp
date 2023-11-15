#include<iostream>
using namespace std;
int faib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans = faib(n-1) + faib(n-2);
    return ans;
}
int main()
{
    cout<<faib(5);
    return 0;
} 