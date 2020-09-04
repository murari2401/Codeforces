#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<cmath>
using namespace std;


int main()
{
	long long int n;
	cin>>n;
	int m=0;
	if(n/100)
	{
		m=m+(n/100);
		n=n-(n/100)*100;	
	}
	if(n/20)
	{
		m=m+(n/20);
		n=n-(n/20)*20;
	}
	if(n/10)
	{
		m=m+(n/10);
		n=n-(n/10)*10;
	}
	if(n/5)
	{
		m=m+(n/5);
		n=n-(n/5)*5;
	}
	m=m+n;
	cout<<m<<endl;
    return 0;
}
