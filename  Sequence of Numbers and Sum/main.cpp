#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,sum;
    cin>>a>>b;
    int minn=min(a,b);
    int maxx=max(a,b);
    for (int i=minn;i<=maxx;i++)
    {
        cout <<i<<" ";
        sum+=i;

    }
    cout <<"sum ="<<sum;


    return 0;
}
