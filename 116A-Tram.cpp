#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b,c=0,m=0;
	while(n--)
	{
		cin>>a>>b;
		c=c-a;
		c=c+b;
		if(c>m)
			m=c;
	}
	cout<<m<<endl;;
}
