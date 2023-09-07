#include<iostream>
using namespace std;

bool check_even_odd(int n ){
    if ((n&1)==0){
        return true;
    }

    else return false;
}
int main()
{
    int n ;
    cin>>n;
    //fun fact even ka binary hamesha he 0 se end hota hai ... eg: 10 = 1010
    //odd ka bianry hamesh he 1 se end hota hia  eg : 5 101

    bool result = check_even_odd(n);
    if(result)
    cout<<"even";

    else cout<<"odd";
    return 0;
}