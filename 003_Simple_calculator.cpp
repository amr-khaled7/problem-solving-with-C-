// Simple Calculator
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int sum = x+y;
    int sub = x-y;
    long long mul=x;
    mul*=y;
    cout << x << " + " << y << " = " << sum<< endl << x << " * " << y << " = " << mul<< endl<< x << " - " << y << " = " << sub;
    return 0;
}
