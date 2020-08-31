#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<cmath>
using namespace std;
int main()
{
	int k,n,w;
	cin>>k>>n>>w;
	int cost=0;
	for(int i=1;i<=w;i++)
	{
		cost=cost+(i*k);//1*3+2*3+3*3+4*3
	}
	
	if(cost>n)
	{
		cout<<cost-n;
	}
	else{
		cout<<0;
	}
}
