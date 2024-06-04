#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char s;
    cin>>a>>s>>b;


    if(a>b)
    {
        if (s=='>')
        cout<<"Right";
        else
        {
            cout<<"Wrong";
        }
    }
    else if (a<b)
        {
            if(s=='<')
            cout<<"Right";
            else
            {
                cout <<"Wrong";
            }
        }
        else if (a==b)
        {
            if (s=='=')
            {
                cout<<"Right";
            }
            else
            {
                cout<<"Wrong";
            }
        }



    return 0;
}
