#include <iostream>

using namespace std;

int main()
{
    int x;
    for (int i=1;i<10000;i++)
    {
        cin>>x;
        if (x==1999)
        {
            cout<<"Correct"<<endl;
            break;
        }
        else if (x!=1999)
            {
            cout<<"Wrong"<<endl;
        }
    }
    return 0;
}
