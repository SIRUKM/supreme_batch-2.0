#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int n = num/2;
    for(int i=0 ;i<n;++i){
        //triangle
        for(int j = 0 ; j<n-i ; j++){
            cout<<"*";
        }
        //pyramid
        for(int j = 0 ; j<2*i+1 ; j++){
            cout<<" ";
        }
        //traingle
        for(int j = 0 ; j<n-i ; j++){
            cout<<"*";
        }
        cout<<endl;


        //triangle
        for(int j = 0 ; j<i+1 ; j++){
            cout<<"*";
        }
        //pyramid
        for(int j = 2*i+1 ; j<0 ; j--){
            cout<<" ";
        }
        //traingle
        for(int j = 0 ; j<i+1 ; j++){
            cout<<"*";
        }
        cout<<endl;
    } 
    return 0;
}