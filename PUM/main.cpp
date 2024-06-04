#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=3;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cout <<i<<endl;
            i+=4;

        }


    }

      for (int k=2;k<=3;k++)
    {
        for (int j2=1;j2<=n;j2++)
        {
            cout <<k<<endl;
            k+=4;
        }
    }



    return 0;
}
