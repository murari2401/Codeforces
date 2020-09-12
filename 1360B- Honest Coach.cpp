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
      v.push_back(x);//3 1 2 6 4
    }
    sort(v.begin(),v.end());//1 2 3 4 6
    int sub=0;
    vector<int>v1;
    for(int i=1;i<n;i++)
    {
      v1.push_back(v[i]-v[i-1]);
    }//1 1 1 2
    sort(v1.begin(),v1.end());//1 1 1 2
    cout<<v1[0]<<endl;
  }
}