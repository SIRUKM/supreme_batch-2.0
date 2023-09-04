#include<iostream>
#import <cmath>
using namespace std;

int decimaltobinary_Method1(int n){
    //Division Method
    int binno =0;
    int i = 0;
    while(n>0){
        int bit = n%2;
        binno = bit * pow(10,i++) + binno;
        n/=2;
    }
    return binno;
}
int main()
{
    int n;
    cin>>n;
    int binary = decimaltobinary_Method1(n);
    cout<<binary;
    return 0;
}