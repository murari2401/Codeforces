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
	int arr[2];
	cin>>arr[0]>>arr[1]>>arr[2];
	sort(arr,arr+3);
	cout<<arr[2]-arr[0];
}
