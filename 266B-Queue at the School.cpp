#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<cmath>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	while(t--)
	{
		for(int i=0;i<n;i++)
		{
			if(s[i]=='G'&&s[i-1]=='B')
			{
				swap(s[i],s[i-1]);
				i++;
			}
		}
	}
	cout<<s<<endl;
}
