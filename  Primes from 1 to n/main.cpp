#include <iostream>

using namespace std;

int main()
{

   short  n;
   cin>>n;
   for(int i =2;i<=n;i++)
   {
       bool cheek=0;
       for (int j=2;j<i;j++)
        {
            if (i%j==0)
            {
                cheek=1;
            }

        }
    if (cheek==0)
        {
            cout <<i<<" ";
        }

   }

    return 0;
}
