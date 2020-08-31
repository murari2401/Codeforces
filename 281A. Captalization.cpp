#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<cmath>
using namespace std;
int main()
{
	string s;
	cin>>s;
	transform(s.begin(),s.begin()+1,s.begin(),::toupper);
	cout<<s<<endl;.
	
}
