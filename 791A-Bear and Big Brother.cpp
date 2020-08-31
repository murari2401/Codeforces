#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int count=0;
	while(a<=b){
		a=a*3;
		b=b*2;
		count++;
	}
	cout<<count;
}
