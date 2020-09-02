#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<cmath>
using namespace std;
int main()
{
	int r;
	cin>>r;
	int count=0;
	for(int i=0;i<r;i++)
	{
		int p,q;
		cin>>p>>q;
		if((q-p)>=2)
			count++;
	}
	cout<<count<<endl;
}
