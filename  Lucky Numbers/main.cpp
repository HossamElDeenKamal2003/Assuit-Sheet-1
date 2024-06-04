#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int counter=0;
    cin>>a>>b;
    for (int i=a;i<=b;i++)
    {
        bool ch=0;
        int n=i;
        while (n!=0)
        {
            short digit=n%10;
            n/=10;
            if (digit!=7&&digit!=4)
            {
                ch=1;
            }
            if (ch==0)
            {
                cout <<i<<" ";
                counter++;
            }
            if (counter==0)
            {
                cout <<-1;
            }

        }
    }


    return 0;
}
