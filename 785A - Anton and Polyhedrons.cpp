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
	int n;
	cin>>n;
	int c=0;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		if(s.compare("Tetrahedron")==0)
			c+=4;
		else if(s.compare("Cube")==0)
			c+=6;
		else if(s.compare("Octahedron")==0)
			c+=8;
		else if(s.compare("Dodecahedron")==0)
			c+=12;
		else
			c+=20;
	}
	cout<<c<<endl;
}
