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
	int k,r;
	cin>>k>>r;
	for(int i=1;i<=10;i++)
	{
		int u=i*k;
		if(u%10==0 || u%10==r)
		{
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
