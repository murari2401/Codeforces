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
    int x,y,n;
    cin>>x>>y>>n;
    int a=n%x;
    if(a-y>=0)
      n=n-(a-y);
    else
    {
        n=n-a-x+y;
    }
    cout<<n<<endl;
  }
}