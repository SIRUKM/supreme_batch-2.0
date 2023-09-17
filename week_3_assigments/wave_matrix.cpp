#include <iostream>
#include<vector>
using namespace std;
void wave_matrix(vector<vector<int> > v)
{
    int m = v.size();
    int n = v[0].size();

    for (int Startcol = 0; Startcol < n; Startcol++)
    {
        if ((Startcol & 1) == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << v[i][Startcol] << endl;
            }
        }

        else
        {
            for (int i = m - 1; i >= 0; i++)
            {
                cout << v[i][Startcol] << endl;
            }
        }
    }
}
int main()
{

    vector<vector<int> > v {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    wave_matrix(v);

    return 0;
}