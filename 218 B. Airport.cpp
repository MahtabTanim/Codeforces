#include<bits/stdc++.h>
using namespace std;
int main()
{
	int j,n,m; cin>>n>>m;
	std::vector<int> v1;
	std::vector<int> v2;
	for(int i=0;i<m;i++)
	{
		cin>>j; 
		v1.push_back(j);
		v2.push_back(j);
	}
	int max_sum=0;
	int n1=n,n2=n;
	while(n1--)
	{
		sort(v1.begin(),v1.end());
		int len=v1.size()-1;
		max_sum+=v1[len];
		v1[len]--;
	}
	long long min_sum=0;
	while(n2--)
	{
		sort(v2.begin(),v2.end());
		int len=v2.size()-1;
		int i=0;
		for( i=0;i<=len;i++) {
			if(v2[i]) break;
		}
		min_sum+=v2[i];
		v2[i]--;
	}
	cout<<max_sum<<" "<<min_sum<<endl;

return 0;
}
