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
	cout<<min(a,b)<<" ";
	cout<<(abs(a-b))/2;
}
