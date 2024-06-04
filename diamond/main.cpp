#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sp =n-1;
    for (int i =1 ;i<=n;i++)
    {
        for (int j=1;j<=sp;j++)
        {
            cout <<" ";
            sp--;
        }
         for(int k=1; k<=(2*i-1); k++)
         {
            cout<<"*";
        cout<<endl;
        }

}
 return 0;
}




