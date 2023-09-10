#include <iostream>
#include <vector>
using namespace std;
// void print(vector<int> v)
// {
//     int size = v.size();
//     for (int i = 0; i < size; i++)
//     {
//         /* code */
//         // cout<<v[i]<<" ";
//         cout << v.at(i) << " ";
//     }
// }

void print2(vector<int> v){
    for(auto x:v){
        cout<<x<<" ";
    }
}
int main()
{
    // vector<int> v;         // vector initilaziton
    vector<int> v1(5, -1); // vector initilaziton
    print2(v1);

    // int n; cin>>n;

    // for(int i =0 ; i<n ; i++){
    //     int data;
    //     cin>>data;
    //     v.push_back(data);
    // }

    // for(int i = 0 ; i< 10 ; i++){
    //     v.push_back(60);
    // }

    // while(1){
    //     int d; cin>>d;
    //     v.push_back(d);
    //     cout<<"capacity: "<<v.capacity()<<" "<<"size: "<<v.size()<<endl;
    // }
    // v.push_back(10); //add element at the end of array
    // v.push_back(1); //add element at the end of array
    // v.push_back(4); //add element at the end of array

    // v.pop_back();//Pop ->delete ->at end
    // v.clear();//clear all the element from the vector

        return 0;
}