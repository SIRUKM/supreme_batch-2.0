#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;

    int mid = (start + end) / 2;
    while (start <= end)
    {
        // found
        if (arr[mid] == target)
        {
            return mid;
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
        int mid = (start + end) / 2;
    }

    // agar yaha tuk pahuche ho mtlb element nahi mila tumhe
    // now return invalid index

    return -1;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = 9;
    int target = 90;
    int ansIndex = binarySearch(arr, n, target);
    if (ansIndex == -1)
        cout << "element nahi mila"<<endl;
    else
        cout << "found at index"<<ansIndex<<endl;
    return 0;
}