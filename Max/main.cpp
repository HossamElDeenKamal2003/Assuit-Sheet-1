#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
   int maxx=0;
   int n;
   cin>>n;
   int num;
   for(int i=1;i<=n;i++)
   {
       cin>>num;
       if (num>maxx)
       {
           maxx=num;
       }
   }
   cout<<maxx<<endl;

    return 0;
}
