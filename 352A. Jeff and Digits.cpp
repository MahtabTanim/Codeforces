#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,j; cin>>n; 
	int f=0,z=0;
	for(int i=0;i<n;i++)
	{
		cin>>j;
		if(j) f++;
		else z++;
	}
	string s="";
	int x=f/9;
	for(int i=0;i<x*9;i++) s.push_back('5');
	for(int i=0;i<z;i++) s.push_back('0');
	if(z) {
		if(x) cout<<s<<endl;
		else cout<<0<<endl;
	}
	else cout<<-1<<endl;
	return 0;
}
