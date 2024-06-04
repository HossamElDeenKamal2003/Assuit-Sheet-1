#include <iostream>

using namespace std;

int main()
{
    bool cheek=0;
    int x;
    cin>>x;

    for (int i=2;i<x;i++)
    {
        if (x%i==0)
        cheek =1;
    }
    if (cheek ==0)
    {
        cout <<"YES"<<endl;
    }
     else
    {
        cout <<"NO"<<endl;
    }



    return 0;
}
