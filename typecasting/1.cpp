#include<iostream>
using namespace std;
int main()
{
    //implicit type convesion 
    int a = 5;
    float b = 10.5;
    float sum = a + b;
    int sum1 = a + b;
    cout<<sum1<<endl;
    cout<<sum<<endl;


    //character type casting

    char ch = 'A';
    int result  = 'A' + 1;
    char result1 = 'A' + 1;
    cout<<result<<endl;
    cout<<result1<<endl;


    //int to char
    int x = 97;
    char y = x;
    cout<<y<<endl;

    //explecit type casting 
    int num1 = 10;
    float num2 = 5.5;
    float result3 = num1 + (int)num2;
    cout<<result3<<endl; 

    //doubel to int 
    double pi = 3.14;
    int convert_to_int = int(pi);
    cout<<convert_to_int<<endl;

    //float to char
    float char1 = 65.49;
    char ch2 = char(char1);
    cout<<ch2<<endl;


    //itn to  flaot
    int int_val = 5;
    float con_val = float(int_val);
    cout<<con_val<<endl;




    return 0;
} 