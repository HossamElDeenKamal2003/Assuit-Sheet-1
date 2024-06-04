#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
   double r;
   cin>>r;
   double pi=3.141592653;

    cout << fixed << setprecision(9)<<(r*r*pi);

    return 0;
}
