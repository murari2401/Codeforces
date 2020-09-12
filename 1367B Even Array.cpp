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
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
      int x;
      cin>>x;
      v.push_back(x);
    }
    int e=0,o=0,f=0;
    for(int i=0;i<n;i++)
    {
      if(i%2==0)
      {
        if(v[i]%2==0)
          f++;
        else
        {
          e++;
        }
      }
      else
      {
        if(v[i]%2==1)
          f++;
        else
          o++;
      }
    }
    if(f==n)
      cout<<0<<endl;
    else if(o==e)
      cout<<e<<endl;
    else
    {
      cout<<-1<<endl;
    }
  }
}