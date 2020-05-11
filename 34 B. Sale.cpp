#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,j,k; cin>>n>>k;
	std::vector<int > v;
	int ss=0;
	for(int i=0;i<n;i++)
	{
		cin>>j; if(j<0) v.push_back(j);
	}
	sort(v.begin(),v.end());
	int sum=0;
	for(int i=0;i<k;i++) {
		if(i==v.size()) break;
		sum+=v[i];
	}
	cout<<fabs(sum)<<endl;
return 0;
}
