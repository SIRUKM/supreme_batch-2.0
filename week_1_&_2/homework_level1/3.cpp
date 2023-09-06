//print no from N to 1

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i = 1;
    while (i<=n){
        cout<<n<<endl;
        n-=1;
    }
    return 0;
}