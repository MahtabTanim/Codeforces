#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,q;
	cin>>n>>m;
	int start=1;
	long long  sum=0;
	for(int i=0;i<m;i++)
	{
		cin>>q;
		int d=q-start;
		if(d<0) d=n-start+q;
		sum+=d;
		start=q;
	}
	cout<<sum<<endl;
}
