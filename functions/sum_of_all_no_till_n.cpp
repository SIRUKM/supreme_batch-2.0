#include<iostream>
using namespace std;
int sum_of_n(int n){
    int sum =0;
    for(int i = 1; i<=n ; i++){
        sum+=i;
    }

    return sum;
}
int main()
{
    int n;
    cin>>n;
    int result = sum_of_n(n);
    cout<<result;
    return 0;
}