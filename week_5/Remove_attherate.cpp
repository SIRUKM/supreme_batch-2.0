#include <iostream>
using namespace std;
void remove_at(char ch, int size)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        char curr = ch[index];

        if (ch[index] == '@')
        {
            curr = " ";
        }
        index++;
    }
}
int main()
{
    char ch[100];
    cin >> ch;
    cout << "Before " << ch << endl;
    remove_at(ch, 100);
    cout << "After " << ch << endl;
    return 0;
}