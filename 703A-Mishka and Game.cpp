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
  int m=0,c=0;
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    if(a>b)
      m++;
    else if(a<b)
      c++;
    else
    {
      m++;
      c++;  
    }
  }
  if(m>c)
    cout<<"Mishka";
  else if(m<c)
    cout<<"Chris";
  else
  {
      cout<<"Friendship is magic!^^";
  }
}