#include<bits/stdc++.h>
using namespace std;
#define MAXN 100009

int main()
{
	long long n, j; 
	
	cin>> n ;

	std::vector<int> v[MAXN];

	std::vector<pair <int ,int > > res;	

	for(int i=1;i<=n; i++) 
	{
		cin>>j;
		v[j].push_back(i);
	}

	int count =0,ss;

	for(int i=1;i<=MAXN;i++)
	{
		ss=v[i].size();
		if(ss==1 )  
		{
			res.push_back(make_pair(i,0));
		}
		else if(ss>=2)
		{
			bool status= true;
			int d= v[i][1]-v[i][0];
			for(int k=0;k<ss-1;k++)
			{
				if(v[i][k]+ d != v[i][k+1]) status =false;
			}
			if(status) res.push_back(make_pair(i,d));
		}
	}
	cout<<res.size()<<endl;
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i].first<<" "<<res[i].second<<endl;
	}	
return 0;
}
