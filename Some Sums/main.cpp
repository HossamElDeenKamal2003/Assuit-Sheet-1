#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int sumt;
    for (int i=1;i<=n;i++)
    {
        int sum=0;
        int y=i;
        while (y!=0)
        {
            sum+=n%10;
            n/10;
        }
        if (sum>=a&&sum<=b)
        {
            sumt+=i;
        }
    }
    cout <<sumt<<endl;


    return 0;
}
