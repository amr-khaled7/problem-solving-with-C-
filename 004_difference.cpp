//difference
#include <iostream>
using namespace std;
int main()
{
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   long long z = a;
   z*=b;
   long long y = c;
   y*=d;
   long long x = z-y;
   cout<<"Difference = "<<x; 
   return 0;
}
