#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int num;
   int ev =0,odd=0,pos=0,neg=0;

   for (int i=1;i<=n;i++)
   {
       cin>>num;
       if (num%2==0)
           ev++;
       else
        odd++;
       if (num>0)
           pos++;
       else if(num<0)
        neg++;
   }
   cout<<"Even: "<<ev<<endl;
   cout<<"Odd: " <<odd<<endl;
   cout<<"Positive: "<<pos<<endl;
   cout<<"Negative: "<<neg<<endl;





    return 0;
}
