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
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int s1=0,s2=0;
		int a[101],b[101];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			s1+=a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
			s2+=b[i];
		}
		sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(int i=0; i<k; i++){
            for(int j=0; j<n; j++){
                if(b[j] > a[j]){
                    swap(a[j],b[j]);
                    break;
                }
            }
        }
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
		}
	}

