#include <iostream>

using namespace std;

int main()
{
    int a,b,r;
    char o,e;
    cin>>a>>o>>b>>e>>r;

    if(o=='+'){
        if (a+b==r)
        {
        cout<<"yes";
        }
        else
        {
        cout<<a+b;
        }
        }

    else if (o=='-')
    {
        if(a-b==r)
            {
        cout<<"yes";
            }
    else
    {
        cout<<a-b;
    }
    }
  else if (o=='*'){
     if (a*b==r)
    {
        cout<<"yes";
    }
    else
    {
        cout<<a*b;
    }
    }




    return 0;
}
