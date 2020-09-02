#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<cmath>
using namespace std;

int main()
{
	long long int a;
	cin>>a;
	if(a%2==0)
		cout<<a/2<<endl;
	else
		cout<<((a+1)/2)*(-1);
}
