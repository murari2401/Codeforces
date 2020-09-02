#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<cmath>
#include<iomanip>
using namespace std;
long long int moves(long long a,long long b)
{
	if(a%b == 0)
		return 0;
	else if(a<b)
		return (b-a);
	else
		return (b-(a%b));
}
int main()
{
	long long int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<moves(a,b)<<endl;
	}
	
}
