#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
  int n;
  cin>>n;
  if(n%2==0)
  {
    int c=n/2;
    cout<<c<<endl;
    for(int i=0;i<c;i++)
    {
      cout<<2<<" ";
    }
  }
  else
  {
    int c=(n-3)/2;
    cout<<c+1<<endl;
    for(int i=0;i<c;i++)
    {
      cout<<2<<" ";
    }
    cout<<3<<" ";
  }
}