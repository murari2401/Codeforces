#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ph=0,total=0;
    int arr[n-1];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			ph+=arr[i];
		}
		else
		{
			if(ph<1)
				++total;
			else
				ph--;
		}
	}
	cout<<total;
}
