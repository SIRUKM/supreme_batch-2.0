#include<iostream>
using namespace std;

void printnumber(int n){
    if(n == 1){
        cout<<1<<" ";
        return;
    }

    if(n==0){
        return;
    }

    cout<<n<<" "<<endl;
    printnumber(n-1);
}
int main()
{
    int n = 5;
    printnumber(n);
    return 0;
}