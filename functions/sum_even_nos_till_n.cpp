#include<iostream>
using namespace std;
int sum(int n){
    int sum = 0;
    for(int i = 1; i<=n; i++){
        if(i%2==0)
        sum+=i;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int result = sum(n);
    cout<<result;
    return 0;
}