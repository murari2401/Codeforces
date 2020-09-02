#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n-1];
	int z=0,u=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==1)
			u++;
	}
	if(u>0)
		cout<<"HARD"<<endl;
	else
		cout<<"EASY"<<endl;
}
