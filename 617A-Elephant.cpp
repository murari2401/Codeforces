#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<cmath>
using namespace std;
int main()
{
	int x;
	cin>>x;
	if(x%5==0)
		cout<<x/5;
	else
	{
		cout<<(x/5)+1;
	}
}
