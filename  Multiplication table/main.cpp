#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum;
    for (int i =1; i<=12;i++)
    {
        sum=n*i;
        cout<<n<<" * "<<i<<" = "<<sum<<endl;
    }


    return 0;
}
