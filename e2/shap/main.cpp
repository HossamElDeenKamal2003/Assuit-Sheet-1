#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int k=1;
  int sp=n-1;
  for (int i=1;i<=n;i++)
  {
      for (int t=sp;t>0;t--)
      {
          cout <<" ";
      }
       for (int j=1;j<=k;j++)
      {
          cout <<"*";
      }
      k+=2;
      cout <<endl;
  }
  return 0;
  }



