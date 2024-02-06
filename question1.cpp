#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    int a = 4;
    int b = 5;
    int c = 6;
    cout << " Sum of two numbers is :" << sum(a,b) << endl;
    cout << " Sum of three numbers is :" << sum(a,b,c) << endl;

    return 0;
}