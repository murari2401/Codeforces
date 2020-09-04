#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<cmath>
#include<vector>
using namespace std;
int main() 
{
	int n,k;
	cin>>n>>k;
	int time=0;
	int c=0;
	for(int i=1;i<=n;i++)
	{
		time=time+(i*5);
		if(time>(240-k))
			break;
		c=c+1;
	}
	cout<<c;
}
