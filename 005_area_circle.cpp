// area off circle
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double area;
  double r;
  cin >> r;
  area = 3.141592653 * r * r;
  cout << fixed << setprecision(9);
  cout << area;
}
