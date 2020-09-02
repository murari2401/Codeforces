#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int l=strlen(s);
	int i=0;
	sort(s,s+l);
	cout<<s;
	/*for(i=0;i<l-1;i++)
	{
		if(s[i]>96&&s[i]<123)
	}*/
}

