#include <iostream>
using namespace std;

int missing_number(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == i)
            continue;

        else
        {
            return i;
            break;
        }
    }

    return v.size();
}
int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(6);
    v.push_back(4);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(0);
    v.push_back(1);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    int result = missing_number(v);
    cout<<result;

    return 0;
}