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
  vector<int>v;
  vector<int>v1;
  vector<int>v2;
  vector<int>v3; // 1 3 1 3 2 1 2   //v1=*136 //v2=*57 //v3=*24
  int c1=0,c2=0,c3=0;
  int i1=0,i2=0,i3=0;
  for(int i=1;i<=n;i++)
  {
    int x;
    cin>>x;
    v.push_back(x);
  }
  /*for(int i=0;i<n;i++)
  {
    cout<<v[i]<<" ";
  }*/
  for(int i=0;i<n;i++)
  {
    if(v[i]==1)
    {
      c1++;
      v1.push_back(i+1);
    }
    if(v[i]==2)
    {
      c2++;
      v2.push_back(i+1);
    }
    if(v[i]==3)
    {
      c3++;
      v3.push_back(i+1);
    }
  } // 1 3 6    5 7     2 4
  /*for(int i=0;i<c2;i++)
  {
    cout<<v2[i]<<" ";
  }*/
  int m=min(min(c1,c2),c3);
  cout<<m<<endl;
  for(int i=0;i<m;i++)
  {
    cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<" "<<endl;
  }
  return 0;
}