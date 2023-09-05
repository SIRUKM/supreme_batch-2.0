#include<iostream>
using namespace std;
//divide hota hai 2 ke power 1 se
int main()
{
    int a;
    cin>>a;
    //once right shift
    int ans = (a>>1);//divided by 2 ke power   1
    cout<<ans<<endl;

    int ans1 = (a>>2);//divided by 2 ke power 2
    cout<<ans1<<endl;

    //unsigned integers ko compiler different way me handle karta hai
    unsigned int n = -100;
    cout<<(n>>1)<<endl;

    return 0;
}