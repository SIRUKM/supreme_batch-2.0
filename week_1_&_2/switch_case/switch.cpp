#include<iostream>

using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    cout<<"make choices :"<<endl;
    cout<<"\n0.Addition\t1.Subtraction \t2.Multiplication\t3.Division\n";

    int ch;
    cin>>ch;

    switch(ch){//parameter kewal integral value hoo sakta hai eg:- int, c har,long....
        case 0:
        cout<<(a+b)<<endl;
        break;

        case 1:
        cout<<(a-b);
        break;

        case 2:
        cout<<(a*b) ;
        break;

        case 3:
        cout<<a/b;
        break;

        default:
        cout<<"invalid operation";
        return 0;
    }

    

    // if(ch==0){
    //     cout<<a+b<<" ";
    // }
    // else if(ch==1){
    //     cout<<a-b<<" "<<endl;
    // }

    // else if(ch==2){
    //     cout<<a*b<<" " <<endl;
    // }

    // else if(ch==3){
    //     cout<<a/b<<" "<<endl;
    // }

    // else{
    //     cout<<"Invalid choice"<<endl;
    //     return 0;
    // }
    return 0;
}