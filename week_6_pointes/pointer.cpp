#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    cout << "a = " << a << endl;

    int *ptr = &a;

    cout << &a << endl;

     cout << "ptr: " << ptr << endl;

    cout << "Accessing: " << *ptr << endl;

    cout << "ptr ka address:" << &ptr << endl;

    cout << sizeof(ptr) << endl; // pointer ke andar hamseha he address store hotea hai , so size is always 8.

    char ch = 'a';
    cout << "ch:" << ch << endl;

    char *chPtr = &ch;

    cout << "Addrerss ch: " << &ch << endl;

    cout << "Address :" << chPtr << endl;

    cout << "Derefrencing :" << *chPtr << endl;// * se hamesha he derefrence hota hia

    cout << sizeof(chPtr) << endl;

    return 0;
}