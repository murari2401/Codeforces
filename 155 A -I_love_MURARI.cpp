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
	int n;
	cin>>n;
	int points;
	cin>>points;
	int min=points,max=points,a=0;
	while(--n)
	{
		cin>>points;
		if(points>max)
		{
			max=points;
			++a;
		}
		if(points<min)
		{
			min=points;
			++a;
		}
	}
	cout<<a<<endl;
	return 0;
}
