#include<iostream>
#include<vector>
using namespace std;
void printNamesFiveTimes(int n){
    //base case
    if(n==0){
        return;
    }

    cout<<"kamlsesh: "<<n<<endl;
    n--;
    printNamesFiveTimes(n);
}

void printLinerarlyFrom_1_n(int n){
    if(n==0) return;
    printLinerarlyFrom_1_n(n-1);
    cout<<n<<endl;
    
}

int submissionOfFirstN_Numbers(int n){
    if(n==0) return 0;
    return n + submissionOfFirstN_Numbers(n-1);
}
void reverseArrayToVector(int arr[], int n, vector<int>&v) {
    for(int i = n-1; i>=0 ; i--){
        v.push_back(arr[i]);
    }
}

void reverseUsingRecurssion(int arr[], int n,int start, int end){
    
    if(start > end) return;
    swap(arr[start], arr[end]);
    reverseUsingRecurssion(arr, n , ++start, --end);


}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    // printNamesFiveTimes(5);
    // printLinerarlyFrom_1_n(10);
    // cout<<submissionOfFirstN_Numbers(5);
    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> v;
    // reverseArrayToVector(arr, 5,v);
    int size = sizeof(arr)/ sizeof(arr[0]); 
    int start = 0;
    int end = size -1;

    reverseUsingRecurssion(arr, size, start, end);
    printArray(arr, 5);
    



    

    
    
    return 0;
}