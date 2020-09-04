#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<cmath>
using namespace std;

long long int candies(long long int n)
{
	int a,b;
	int count=0;
	if(n<3)
		return 0;
	else 
	{
		if(n%2==0)
		{
			return (n/2)-1;	
		}
		else
		{
			return (n/2);
		}
	}
}

int main()
{
	long long int t;
	cin>>t;
	for(long long int i=0;i<t;i++)
	{
		long long int n;
		cin>>n;
		cout<<candies(n)<<endl;
	}
}
