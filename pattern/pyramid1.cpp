#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int totalrows = 0;
    for(int i = 0 ; i<n ; i++){
        for (int j=0 ;j<n-i-1 ;++j){
            cout<<" ";
        }
        for (int j=0 ;j<2*i + 1 ;++j){
            cout<<"*";
        }
        if(i==n-1){
            totalrows = 2*i+1;
        }
        cout<<endl;

    }

    for(int i = 0; i<totalrows;i++){
        cout<<"*";
    }
    return 0;
}