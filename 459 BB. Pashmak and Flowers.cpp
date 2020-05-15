#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	std::vector<int> v;
	std::map<int, int> ma;
	std::map<int, int> ::iterator it;
	std::map<int, int> ::iterator it2;
	for(int i=0;i<n;i++)
	{
		int j; cin>>j;
		v.push_back(j);
		ma[j]++;
	}
	sort(v.begin(),v.end());
	int max_dif=0,s=v.size()-1;
	max_dif=v[s]-v[0];
	long long  val, temp;
	long long  count=0;
	if(ma.size()==1) {
			count=(long long )n*(long long)(n-1);
			count/=2;
	} else {
				for(it =ma.begin();it!=ma.end();it++)
			{
				val=it->first;
				temp=max_dif+val;
				it2=ma.find(temp);
				if(it2!=ma.end()) {
					count+=(long long )ma[temp]*(long long )ma[val];
				}
	}
	}
	cout<<max_dif<<" "<<count<<endl;
return 0;
}
