#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	double n,k,sum=0.0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>k;
		sum+=k;
	}
	cout<<std::fixed<<setprecision(12)<<sum/n<<endl;
	return 0;
}
