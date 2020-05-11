#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,q;
	cin>>n>>m;
	vector<int> v;
	for (int i=0;i<n;i++)
	{
		cin>>q; v.push_back(q);
	}
	sort(v.begin(),v.end());
	while(m--)
	{
		cin>>q;
		vector<int> ::iterator it;
		it=upper_bound(v.begin(),v.end(),q);
		int x=it-v.begin();
		cout<<x<<" ";
	}
return 0;
}
