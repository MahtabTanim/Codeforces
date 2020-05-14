#include<bits/stdc++.h>
using namespace std;
string xx(int n)
{
	string s;
	for(int i=0;i<n ;i++) {
		s.push_back(i+48);
		s.push_back(' ');
	}
	for(int i= n;i>=0 ;i--) {
		s.push_back(i+48);
		if(i>0)s.push_back(' ');	
	}
	return s;
}
int main()
{
	int n; cin>>n;
	vector<string> v;
	for(int i=0;i<=n;i++) {
		v.push_back(xx(i));
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=1;j<=(n-i)*2;j++) cout<<" ";
		cout<<v[i]<<endl;
	}
	for(int i=n-1;i>=0;i--)
	{
		for(int j=1;j<=(n-i)*2;j++) cout<<" ";
		cout<<v[i]<<endl;
	}
return 0;
}
