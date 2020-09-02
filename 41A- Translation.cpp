#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<cmath>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	reverse(s1.begin(),s1.end());
	if(s1==s2)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
