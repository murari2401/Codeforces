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
	int p[n-1];
	int res[n-1];
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
		res[p[i]-1]=i+1;
	}
	for(int i=0;i<n;i++)
	{
		cout<<res[i]<<" ";
	}
	return 0;
}
