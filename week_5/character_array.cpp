#include <iostream>
using namespace std;
int main()
{
    char ch[10];
    // cin >> ch; //for taking a line as input

    cin.getline(ch, 10);
    cout << "ch is : " << ch << endl;

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "at index i : " << i << " " << ch[i] << endl;
    // }
    // int temp = ch[6];
    // int result = (int)temp;
    // cout << result;
    return 0;
}