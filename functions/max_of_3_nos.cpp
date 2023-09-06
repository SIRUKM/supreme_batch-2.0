#include<iostream>
using namespace std;
// int maxofthree(int a , int b , int c){
//     if (a >b && a >c)
//     return a;
//     else if(b>a && b>c){
//         return b;
//     }

//     else return c;
// }

int maxofthree(int a , int b , int c){
    return ((max((max(a,b)),c)));
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int result = maxofthree(a,b,c);
    cout<<result;
    return 0;
}