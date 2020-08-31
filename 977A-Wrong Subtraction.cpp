#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<cmath>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	while(k>0)
	{
		if(n%10==0)
		{
			n=n/10;
		}
		else
		{
			n--;
		}
		k=k-1;
	}
	cout<<n<<endl;
}
