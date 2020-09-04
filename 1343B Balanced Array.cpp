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
		int s1=0,s2=0;
		if(n%4!=0)
			cout<<"NO"<<endl;
		else
		{	
			cout<<"YES"<<endl;
			for(int i=2;i<=n;i+=2)
			{
				cout<<i<<" ";
				s1+=i;
			}
			for(int i=1;i<n-2;i+=2)
			{
				cout<<i<<" ";
				s2+=i;
			}
			cout<<s1-s2<<endl;
		}
	}
	return 0;
}
