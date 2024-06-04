#include <iostream>

using namespace std;

int main()
{
   int i,y;
   cin>>i;
   y=i/365;
   cout <<y<<" years"<<endl;
   int m=i%365;
   int m2=m/30;
   cout<<m2 <<" months"<<endl;

   cout<<m%30<<" days"<<endl;

    return 0;
}
