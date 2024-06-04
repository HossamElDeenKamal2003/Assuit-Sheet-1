#include <iostream>

using namespace std;

int main()
{
    int a,b ;
    int c,d;
    cin>>a>>b>>c>>d;

    if (c<=a&&a<=d)
    {

        if (b<=d){cout <<a<<" "<<b;}
        else if(b>=d) {cout <<a<<" "<<d;}
    }
     if(c>=a&&c<=d)
        {

             if (b<=d){cout<<c<<" ";cout<<b;}
        else if(b>=d) { cout<<c<<" "<<d;}

        }
else
    cout<<-1;



    return 0;
}
