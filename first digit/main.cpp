#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int r=x/1000;


    if (r%2==0)
    {
        cout <<"EVEN";
    }
    else
    {
        cout <<"ODD";
    }


    return 0;
}
