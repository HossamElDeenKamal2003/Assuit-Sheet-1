#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

   for (int i=1;i<=t;i++)
   {
        int x,y;
        cin>>x>>y;
        int minn=min(x,y);
        int maxx=max(x,y);
        int sum=0;

       for (int k=minn+1;k<maxx;k++)
       {

           if (k%2!=0)
           {
               sum+=k;
           }
       }
       cout <<sum<<endl;
   }


    return 0;
}
