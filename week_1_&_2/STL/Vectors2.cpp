#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;

    v.pop_back();

    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;
    vector<int> v2(3, 50);

    swap(v, v2);

    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;

    for (auto element : v2)
    {
        cout << element << " ";
    }
    cout << endl;
    j;

    return 0;
}