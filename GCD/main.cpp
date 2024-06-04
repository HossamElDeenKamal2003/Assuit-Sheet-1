#include <bits/stdc++.h>

using namespace std;

int main()
{
    short a;
    short b;
    cin>>a>>b;
    short minn=min(a,b) ;

    for (int i=minn;i>=1;i--)
    {
        if (a%i==0&&b%i==0)
        {
            cout <<i<<endl;
            break;
        }
    }

    return 0;
}
