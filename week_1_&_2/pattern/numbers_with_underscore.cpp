#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0 ;i<n;++i){ 
        for (int j = 0;j<n;++j){
            if((i==0)|| i== n-1){
                cout<<j+1;
            }
            else {
                if(j==n-1){
                    cout<<i;
                }
                else{
                    cout<<"_";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}