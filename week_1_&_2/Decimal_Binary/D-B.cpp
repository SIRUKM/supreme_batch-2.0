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

int decimaltobinary_Method2(int n){
    //Division Method
    int binno =0;
    int i = 0;
    while(n>0){
        int bit = n&1;
        binno = bit * pow(10,i++) + binno;
        n = n>>1;
    }
    return binno;
}

int binarytodecimal(int n){
    int decimal = 0;
    int i = 0 ;
    while(n){
        int bin  = n%10;
        decimal = decimal + bin * pow(2,i++);
        n/=10;
    }
    return decimal;
}
int main()
{
    int n;
    cin>>n;
    // int binary = decimaltobinary_Method2(n);
    // cout<<binary;

    int decimal = binarytodecimal(n);
    cout<<decimal;
    return 0;
}