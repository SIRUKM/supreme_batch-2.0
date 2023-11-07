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

void reverse(char ch[], int size)
{
    int s = 0;
    int e = size - 1;

    while (s <= e)
    {
        swap(ch[s], ch[e]);
        s++;
        e--;
    }
}
int main()
{
    char ch[100];
    cin.getline(ch, 100);
    int len = find_len(ch, 100);
    cout << len << endl;

    reverse(ch, len);
    cout << "after reversal : " << ch << endl;
    return 0;
}