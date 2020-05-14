#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m; cin>>n>>m;
	vector<int> v;
	int j;
	for(int i=0;i<m;i++)
	{
		cin>>j; v.push_back(j);
	}
	sort(v.begin(),v.end());
	int mi=1000000;
	for(int i=0;i<=m-n;i++)
	{
		int t=fabs(v[i]-v[i+n-1]);
		mi=min(mi,t);
	}
	cout<<mi<<endl;
return 0;
}
