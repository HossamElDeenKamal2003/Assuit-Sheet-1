#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d ;
    cin>>a>>b>>c>>d;
    a%=100;
    b%=100;
    c%=100;
    d%=100;
   long long s=a*b*c*d;
    int s2=s%100;
    if (s2<10)
    {
        cout<<0<<s2;
    }
    else{cout <<s2;}



    return 0;
}
