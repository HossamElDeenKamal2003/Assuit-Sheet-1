#include <iostream>

using namespace std;

int main()
{
    int A;
    int B;
    char S;
    cin>> A>>S>>B;

    if (S=='/')
        {
            cout<<A/B;
        }
    else if (S=='*')
    {
        cout<<A*B;
    }
    else if (S=='+')
    {
        cout<<A+B;
    }
    else if (S=='-')
    {
        cout<<A-B;
    }


    return 0;
}
