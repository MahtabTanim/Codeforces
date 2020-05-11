#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,j; cin>>n;
	std::vector<int > v;
	for(int i=0;i<n;i++)
	{
		cin>>j; v.push_back(j);
	}
	int m; cin>>m;
	std::vector<int > v1;
	int max_ratio=1;
	for(int i=0;i<m;i++)
	{
		cin>>j; v1.push_back(j);
		for(int k=0;k<n;k++)
		{
			if(j%v[k]==0) {
				int r=j/v[k];
				if(max_ratio<r) max_ratio=r;
			}
		} 
	}	
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(v1[j]%v[i]==0) {
				if((v1[j]/v[i])==max_ratio) {
					count++;
					v1[j]=-1;
				}
			}
		}
	}
	cout<<count<<endl;
return 0;
}
