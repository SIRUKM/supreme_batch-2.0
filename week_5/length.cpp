#include <iostream>
using namespace std;
int find_length(char ch[], int size)
{
    int length = 0;
    for (int i = 0; i < size; i++)
    {

        if (ch[i] == '\0')
        {
            break;
        }
        else
        {
            length++;
        }
    }

    return length;
}
int main()
{
    char ch[100];
    // cin >> ch;
    cin.getline(ch, 100);

    // int result = find_length(ch, 100);
    // cout << result;

    cout << "finding length using function : " << strlen(ch) << endl;

    return 0;
}