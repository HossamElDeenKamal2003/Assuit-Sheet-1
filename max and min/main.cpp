#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<min(a,(min(b,c)))<<" ";
    cout<<max(a,max(b,c));
    return 0;
}
