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
	string s;
	cin>>s;
	int c1=0,c2=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='A')
			c1++;
		if(s[i]=='D')
			c2++;
	}
	if(c1>c2)
		cout<<"Anton";
	else if(c1<c2)
		cout<<"Danik";
	else
		cout<<"Friendship";
}
