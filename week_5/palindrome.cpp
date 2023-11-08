#include <iostream>
using namespace std;
int find_len(char ch[], int size)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        index++;
    }
    return index;
}

bool palindrome(char ch[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        if (ch[s] != ch[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}
int main()
{
    char ch[100];
    cin >> ch;
    cout << "Before " << ch << endl;
    int len = find_len(ch, 100);
    bool ans = palindrome(ch, len);

    if (ans)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not";
    }
    return 0;
}