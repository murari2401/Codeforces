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
    vector<int>a;
    vector<int>b;
    for(int i=0;i<n;i++)
    {
      int x;
      cin>>x;
      a.push_back(x);
    }
    for(int j=0;j<n;j++)
    {
      int z;
      cin>>z;
      b.push_back(z);
    }
    long long int m1=*min_element(a.begin(),a.end());
    long long int m2=*min_element(b.begin(),b.end());
    //cout<<m1<<" "<<m2;
    long long int c=0,m=0; //3 5 6 -3   3 2 3-2   
    for(int i=0;i<n;i++)
    {
      if(a[i]>m1 && b[i]>m2)
      {
        m=min(a[i],b[i]);
        a[i]=a[i]-(m-min(m1,m2));
        b[i]=b[i]-(m-min(m1,m2));
        c=c+(m-min(m1,m2));
        if(a[i]>m1)
        {
          c=c+(a[i]-m1);
          a[i]=a[i]-(a[i]-m1);
        }
        else if(b[i]>m2)
        {
           c=c+(b[i]-m2);
          b[i]=b[i]+(b[i]-m2);
        }
      }
      else if(a[i]==m1 && b[i]>m2)
      {
        c=c+(b[i]-m2);
        b[i]=b[i]+(b[i]-m2);
      }
      else if(a[i]>m1 && b[i]==m2)
      {
        c=c+(a[i]-m1);
        a[i]=a[i]-(a[i]-m1);
      }
    }
    cout<<c<<endl;
  }
}