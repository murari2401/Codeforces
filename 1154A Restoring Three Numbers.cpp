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
	//int s1,s2,s3,s;
	//cin>>s1>>s2>>s3>>s; 
	int arr[3];
	for(int i=0;i<4;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+4);
	//a+b b+c c+a a+b+c a=s-c-b -s2+s
	cout<<(s-s1)<<" "<<(s2-s+s1)<<" "<<(s-s2);
	
	return 0;
}
