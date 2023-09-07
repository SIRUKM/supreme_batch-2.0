#include <iostream>
#include <limits.h>
using namespace std;

// void print_arr(int arr[],int n){
//     for(int i = 0 ; i< n ; i++){
//         cout<< arr[i]<<" ";
//     }
// }

// bool check_element(int arr[], int n, int target)
// {
//     for (int i = 0; i < n; ++i)
//     {
//         if (target == arr[i])
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int count_1_and_0(int arr[], int n){
//     int one=0 , zero=0;
//     for(int i=0;i<n;++i){
//         if(arr[i]==1){
//             one++;
//         }
//         else{
//             zero++;
//         }

//     }
//     return one,zero;

// }

// int min_val(int arr[], int n){
//     int min_ans = INT_MAX;
//     for(int i =0 ; i<n; i++){
//         min_ans = min(min_ans, arr[i]);
//     }
//     return min_ans;

// }

// void reverse_arr(int arr[], int n)
// {
//     // for (int i = 0; i < n; i++)
//     // {
//     //     swap(arr[i], arr[(n - 1) - i]);
//     // }
//     // int start = 0;
//     // int end = n-1;
//     // // while(start<=end){
//     // //     swap(arr[start++], arr[end--]);
//     // // }
//     // for(int i = 0 ,j = n-1; i<=j; i++,j--){
//     //     swap(arr[i] , arr[j]);
//     // }
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout << arr[i] << " ";
//     // }
// }

void extreme_print(int arr[], int n){
    int start = 0 ;
    int end = n-1;
    while(start<=end){
        if(start == end){
            cout<<arr[start];
        }
        cout<<arr[start++]<<" "<<arr[end--]<<" ";
    }
}
int main()
{
    int arr[5] = {3, 4, 6, 1, 2};
    int n = 5;
    extreme_print(arr, n);
    // int a = 5;
    // cout << "size of arr;" << sizeof(a) << endl;
    // // cout<<"address of a :"<<&a<<endl;

    // int arr[10];
    // cout << "size of arr;" << sizeof(arr) << endl;
    // // cout<<"Base address of arr : "<< &arr<<endl;
    // // cout<<"Base address of arr : "<< arr<<endl;

    // array inilization
    // int arr[] = {1, 2, 3, 4, 5,6};
    // cout << "size of arr;" << sizeof(arr) << endl;

    // int brr[5] = {1, 2, 3, 4, 5};
    // cout << "size of arr;" << sizeof(brr) << endl;

    // int crr[5] = {1, 2};
    // cout << "size of arr;" << sizeof(crr) << endl;
    // cout<<crr[3]<<endl;

    // array indexing
    //  int brr[5] = {1, 2, 3, 4, 5};
    //  cout<<brr[0]<<endl;
    //  cout<<brr[4]<<endl;

    // for(int i = 0 ; i<sizeof(brr)/sizeof(brr[0]); i++){
    //     cout<<brr[i]<<' ';
    // }

    // int target = 8;
    // int result = check_element(arr, n, target);

    // if (result)
    // {
    //     cout << "Element found";
    // }

    // else
    // {
    //     cout << "Not Found ";
    // }

    // print_arr(arr,n);

    // // printing the result by doubling
    // int target = 2;
    // bool flag = 0;
    // for(int i = 0 ; i<n ; i++){
    //     if(arr[i]==target) {
    //         flag = 1;
    //         break;
    //     }

    // }
    // if(flag){
    //     cout<<"found";
    // }

    // else{
    //     cout<<"not found";
    // }

    // int a = -1;
    // if (a)
    //     cout << "correct";

    // else
    //     cout << "wrong";

    return 0;
}