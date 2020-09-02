#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<cmath>
using namespace std;

int main()
{
	int n,h;
	cin>>n>>h;
	int arr[n-1];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>h)
		{
			count=count+2;
		}
		else{
			count+=1;
		}
	}
	cout<<count;
}
