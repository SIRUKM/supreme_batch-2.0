#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;

    // int mid = (start + end) / 2;

    // int mid = start + (end-start)/2;

    int ans = -1;// for storing 
    while (start <= end)
    {
        int mid = start + (end-start)/2;
        // found
        if (arr[mid] == target)
        {
            ans =  mid;//store kar liye
            //aab right me jaooo
            start = mid +1;

        }
        // right me jaoo
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        // left me  jaooo
        else
        {
            end = mid - 1;
        }

        // mid update v karna hoga naa
        
    }

    // agar yaha tuk pahuche ho mtlb element nahi mila tumhe
    // now return invalid index

    return ans;
}
int main()
{
    int arr[] = {10, 30, 30, 30, 50, 60, 70, 80, 90};
    int n = 9;
    int target = 30;
    int ansIndex = binarySearch(arr, n, target);
   cout<<ansIndex;
    return 0;
}