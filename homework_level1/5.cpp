//checking prime

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rem = 0;
    if(n==1) 
    cout<<"prime";
    
    else{
        int i = 2;
        while(i<n){
            rem = n%i;
            if(rem==0) {
                rem++;
                break;
            }
            i++;
            
        }
    }
    if(1){
        if(rem == 1){
            cout<<"not prime";
        }

        else{
        cout<<"prime";
        }
    }

    
    return 0;
}