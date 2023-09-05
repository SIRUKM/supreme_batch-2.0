#include<iostream>
using namespace std;

//left shift me hamesha he value double hoo jata hai
int main()
{
    int a;
    cin>>a;
    int ans = (a<<1);//left shift me hamesh he value double hoo jata hai
    cout<<"answer for single left shift :" <<ans<<endl;
    int ans1 = (a<<2);//here 2 represents 2 baar left shift 
    cout<<"answer for double left shift :"<<ans1<<endl;


    //negative number se shift karne pe garbage value aata hai 
    cout<<"garbage value :" << (a << -1) <<endl;
    return 0;
}