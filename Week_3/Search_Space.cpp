#include <iostream>
using namespace std;

int getQuotent(int divisor, int divident)
{
    int s = 0;
    int e = divident;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mid * divisor == divident)
        {
            return mid;
        }

        else if (mid * divisor > divident)
        {
            e = mid - 1;
        }

        else
        {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int divisor = 7;
    int divident = 27;

    int ans = getQuotent(divisor, divident);
    cout << "Quotent is :" << ans;
    return 0;
}