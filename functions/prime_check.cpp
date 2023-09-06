#include <iostream>
using namespace std;
void check_prime(int n)
{
    if (n == 1)
        return;

    int count = 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0){
            count++;
            break;
        }
    }

    if(count==1)
    cout<<"not prime";

    else cout<<"prime";
}
int main()
{
    int n;
    cin >> n;
    check_prime(n);
    return 0;
}