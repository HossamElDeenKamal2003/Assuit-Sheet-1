#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a>=b&&a>=c)
    {
       if (b<=c)
       {
           cout<<b<<endl<<c<<endl<<a<<endl;
            cout<<""<<endl;

    cout<<a<<endl<<b<<endl<<c;
       }
       else
       {
           cout<<c<<endl<<b<<endl<<a<<endl;
               cout<<""<<endl;

    cout<<a<<endl<<b<<endl<<c;
       }

    }


    else if(b>=a&&b>=c)
    {
       if (a<=c)
       {
           cout<<a<<endl<<c<<endl<<b<<endl;
            cout<<""<<endl;

    cout<<a<<endl<<b<<endl<<c;
       }
       else
       {
           cout<<c<<endl<<a<<endl<<b<<endl;
              cout<<""<<endl;

    cout<<a<<endl<<b<<endl<<c;
       }

    }

    else if(c>=a&&c>=b)
    {
       if (a<=b)
       {
           cout<<a<<endl<<b<<endl<<c<<endl;
            cout<<""<<endl;

    cout<<a<<endl<<b<<endl<<c;
       }
       else
       {
           cout<<b<<endl<<a<<endl<<c<<endl;
               cout<<""<<endl;

    cout<<a<<endl<<b<<endl<<c;
       }

    }





    return 0;
}
