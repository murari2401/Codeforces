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
	int t;
	cin>>t;
	while(t--)
	{
		vector<int>v;
		int a;
		cin>>a;
		int pow=1;
		while(a)
		{
			if(a%10)
				v.push_back((a%10)*pow);
			pow=pow*10;
			a=a/10;
		}
		cout<<v.size()<<endl;
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
