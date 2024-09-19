void reverseArray(int arr[], int n, vector<int>&v) {
    for(int i = n-1; i>=0 ; i--){
        v.push_back(arr[i]);
    }
}